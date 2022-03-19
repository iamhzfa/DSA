// Modulor Exponentiation(leet code, code studio)
// forula for finding Answer = (x^n)%m

#include<iostream>
using namespace std;

// Brute force approach O(n)

// int modularExponentiation(int x, int n, int m) {
// 	//  Write your code here.
//     int ans=1;
//     while (n>0 )
//     {
//         ans = ans*x;
//         n--;
//     }
//     ans = (ans)%m;
//     return ans;
// }


// Optimized approach O(log(n))

int modularExponentiation(int x, int n, int m) {
	//  Write your code here.
    int ans=1;
    while (n>0 )
    {
        if(n&1){
            ans = (1LL*ans * x)%m;
        }
        x=(1LL*x*x)%m;
        n=n>>1;
    }
    return ans;
}

int main(){
    int x = 4, n = 3, m = 10;
    // cout<<(3^2);
    int ans = modularExponentiation(x, n, m);
    cout<<ans;
    return 0;
}