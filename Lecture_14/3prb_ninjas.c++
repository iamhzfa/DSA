// Binary Search : Find a square root of a number in integer as well as in points also(In more prescribed form).
#include<iostream>
using namespace std;

long long int sqrt(int n){
    int s=0, e=n-1;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while (s<=e)
    {
        long long int squar = mid*mid; 
        if(squar == n)
            return mid;
        else if(squar<n){
            ans = mid;
            s = mid+1;
        }
        else if(squar>n){
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

double inPoints(int n, int precision, int intSol){
    double factor = 1;
    double ans = intSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor/10;
        for (double j = ans; j*j<=n ; j=j+factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    int intSol = sqrt(n);
    cout<<"Answer is : "<<inPoints(n, 3, intSol);
    return 0;
}