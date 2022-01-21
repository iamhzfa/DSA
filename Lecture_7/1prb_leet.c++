// Reverse Integer (7 question in Leet Code)
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number : "<<endl;
    cin>>n;
    int ans=0;
    while (n!=0)
    {
        int digit = n%10;
        
        // bcoz integer range in (-2'spower31, 2'spower31 -1)
        if ((ans > INT_MAX/10) || (ans < INT_MIN/10))
        {
            return 0;
        }

        ans = (ans*10)+digit;
        n = n/10;
    }
    cout<<"Revers Number is "<<ans;
}