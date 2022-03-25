// Recursion :- how to calculate 2's power
#include<iostream>
using namespace std;

int power(int n){
    // base condition
    if (n == 0)
        return 1;
    
    return (2 * power(n-1));    
}

int main(){
    cout<<endl;
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int ans = power(n);
    cout<<"Answer is "<<ans<<endl<<endl;

    return 0;
}