// Reverse a string using recursion :- More optimized for privious question
#include<iostream>
using namespace std;

// More optimized for privious method :- using call by reference
// reverse a string using single pointer approach
void reverse(string& a, int i, int n){
    if(i>=(n/2))
        return ;
    swap(a[i],a[n-i-1]);
    i++;
    reverse(a, i, n);
}

int main(){
    string a = "huzefa";
    int i=0;
    int size=a.length();
    cout<<endl<<a<<endl; 
    reverse(a, i, size);
    cout<<endl<<a<<endl<<endl;    

    return 0;
}