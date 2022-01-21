// Complement of Base 10 integer : (1009 question in Leet Code)
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int m=n;
    int mask = 0;
    if (n==0)
       return 1;
    
    while (m!=0)
    {
       mask = (mask << 1) | 1;     
       m = m>>1;  
    }
    int ans = (~n) & mask;
    cout<<ans;    
}