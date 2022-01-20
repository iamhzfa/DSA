// Negative or Positive Decimal Number to Binary Number.

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number :: "<<endl;
    cin>>n;
    int ans=0, i=0;
    int num = n;
    if(n<0){
        num = n * (-1);
    }
    while (num != 0)
    {
        int bit = num&1;
        ans = (bit*pow(10, i))+ans;
        i++;
        num = num>>1;
    }
    if (n<0)
    {        
    cout<<"Binary Number is :: "<<(~ans + 1)*(-1);        
    }
    cout<<ans;
    
}