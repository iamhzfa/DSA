// Recursion : Say digit (convert the number to string)
#include<iostream>
using namespace std;

void sayDigit(int n, string str[]){
    
    if(n<=0)
        return ;

    int digit = n % 10;
    n = n / 10;
    // Recursive Call
    sayDigit(n, str);

    cout<<str[digit]<<" ";
}

int main(){
    int n;
    cin>>n;

    // mapping
    string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    cout<<endl;
    sayDigit(n, str);
    cout<<endl;

    return 0;
}