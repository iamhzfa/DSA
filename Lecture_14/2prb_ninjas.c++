// Binary Search : Find a square root of a number in integer.
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

int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    cout<<sqrt(n);
    return 0;
}