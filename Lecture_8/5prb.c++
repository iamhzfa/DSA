// Evaluating nCr.
#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int num, int r){
    int nominator = factorial(num);
    int R = num-r;
    int denominator = factorial(r) * factorial(R);
    int ans = nominator/denominator;
    return ans;
}

int main(){
    int n, r;
    cin>>n>>r;

    cout<<nCr(n, r);


    return 0;
}