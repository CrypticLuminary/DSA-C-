// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     char stack[100];
//     int length;
//     int top;
//     top = -1;

//     cout << "Enter the postfix expression: " << endl ;
//     cin >> stack;

//     cout << "The postfix expression is: " << input << endl;

//     for(i=0; i<top; i++){

//     }


//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;
int main()
{    int a,x1,x2,x3,x4,i=0;
    stack <int> s1;
    char str[200];
    cout<<"Enter a postfix Expression "<<endl;
    cin>>str;
    while(str[i]!='\0')
    {  a=str[i];

        if(isdigit(a))
        {   a=str[i]-48;
           s1.push(a);
           cout<<"push value :: "<<a<<endl;
        }
        else
        {
            x1=s1.top();
            cout<<"Value on top "<<x1<<" going to pop"<<endl;
            s1.pop();
            x2=s1.top();
            cout<<"value on top "<<x2<<" going to pop"<<endl;
            s1.pop();
            switch(a){
        case '+':
            x3=x1+x2;
            cout<<"push value :: "<<x3<<endl;
            s1.push(x3);
            break;
        case '-':
            x3=x2-x1;;
            s1.push(x3);
            cout<<"push value :: "<<x3<<endl;
            break;
        case '*':
            x3=x2*x1;
            s1.push(x3);
            cout<<"push value :: "<<x3<<endl;
            break;

        case '/':
            x3=x2/x1;
            s1.push(x3);
            cout<<"push value :: "<<x3<<endl;
            break;
        }

        }i++;
    }

    cout<<"ans is :: "<<s1.top()<<endl;
return 0;

}
