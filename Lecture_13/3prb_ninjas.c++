// Binary Search : find the peak mountain index.
#include<iostream>
using namespace std;

int peakIndexMountain(int arr[], int n){
    int s=0, e=n-1, mid=(s+e)/2;
    int ans=-1;
    while (s<e)
    {
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            ans = mid;
            break;
        }
        else if(arr[mid]<arr[mid+1])
            s = mid;
        else if(arr[mid]>arr[mid+1])
            e = mid;
        mid = (s+e)/2;
    }
    return ans;
}
// int peakIndexMountain(int arr[], int n){
//     int s=0, e=n-1, mid=s+(e-s)/2;
//     while (s<e)
//     {
//         if(arr[mid]<arr[mid+1]){
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return s;
// }

int main(){
    int n=6;
    int arr[n]={1,5,4,3,2,1};
    cout<<"Peak Mountain Index is "<<peakIndexMountain(arr, n);
    return 0;
}