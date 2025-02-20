#include <iostream>
using namespace std;

// Define the structure for a node
struct Node {
    int info;        // Data field
    Node* next;      // Pointer to the next node
};

// Function to display the linked list
void displayList(Node* pfirst) {
    if (pfirst == NULL) {
        cout << "The list is empty." << endl;
        return;
    }

    Node* current = pfirst;
    cout << "List: ";
    while (current != NULL) {
        cout << current->info << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* pfirst = NULL;  // Declare head pointer and initialize to NULL
    int choice, data;
    Node* pnew;  // Declare pnew outside the switch to avoid jump errors

    do {
        // Display menu
        cout << "\nMenu: \n";
        cout << "1. Insert data at the beginning\n";
        cout << "2. Display list\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:  // Insert data at the beginning
                cout << "Enter the data for the new node: ";
                cin >> data;

                // Create a new node
                pnew = new Node;  // Initialize pnew here
                pnew->info = data;

                // If the list is empty
                if (pfirst == NULL) {
                    pfirst = pnew;
                    pnew->next = NULL;
                }
                else {
                    // Insert the new node at the beginning
                    pnew->next = pfirst;
                    pfirst = pnew;
                }
                cout << "Data inserted successfully!" << endl;
                break;  // Don't forget the break statement

            case 2:  // Display the linked list
                displayList(pfirst);
                break;  // Don't forget the break statement

            case 3:  // Exit
                cout << "Exiting program..." << endl;
                break;  // Don't forget the break statement

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 3);  // Repeat until the user chooses to exit

    return 0;
}
