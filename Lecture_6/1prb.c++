// Decimal Number to Binary Number.
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Decimal Value u want to convert into Binary : "<<endl;
    cin>>n;
    int ans = 0, i = 0;
    while (n!=0)
    {
        int bit = n & 1;/*for knowing last last bit is zero or one.
        eg: n=1
        n & 1 => 1 & 1 =1,
        n=0
        n & 0 => 0 & 1 =0 */
        ans = (bit * pow(10, i)) + ans;
        i++;
        n = n >> 1;/*Right shift :- For getting last bit of n*/
    }
    cout<<"Answer is : "<<ans;
}