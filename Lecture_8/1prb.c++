// Simple Calculator
#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the number : "<<endl;
    cin>>a;
    cout<<"Enter the number : "<<endl;
    cin>>b;
    
    char op;
    cout<<"Enter the Operation : "<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<(a+b);
        break;
    case '-':
        cout<<(a-b);
        break;
    case '*':
        cout<<(a*b);
        break;
    case '/':
        cout<<(a/b);
        break;
    
    default:
        cout<<"Pleas enter a valid option";
        break;
    }
}