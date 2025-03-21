#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array is: ";
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"enter the element to be searched: ";
    cin>>key;
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"element found at position: "<<i+1;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"element not found";
    }
    return 0;
}