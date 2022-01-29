// Binary Search : Book Allocation Problem
#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int studCount=1;
    int pageSum=0;
    for (int i = 0; i < n; i++)
    {
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studCount +=1;
            if (studCount<=m && pageSum<=mid)
                pageSum = arr[i];
            else
                return false;            
        }
    }
    return true;
}
int allocationBook(int arr[], int n, int m){
    int s=0;
    int sum=0;
    for (int i = 0; i < n; i++)
        sum+=arr[i];
    int e=sum;
    int mid = s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid-1;
        }
        else
            s = mid+1;
        mid=s+(e-s)/2;        
    }    
    return ans;
}
int main(){
    int n=4;
    int arr[n]={5,10,15,16,18};
    int m=2;
    cout<<allocationBook(arr, n, m);
    return 0;
}