// Binary Search : first and last occurence in array
#include<iostream>
using namespace std;

int firstOcc(int arr[],int n, int key){
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while (s<=e)
    {
        if (arr[mid]==key)
        {
            ans = mid;
            e = mid-1; 
        }
        else if (arr[mid]<key)
        {
            s=mid+1;
        }
        else if (arr[mid]>key)
        {
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[],int n, int key){
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while (s<=e)
    {
        if (arr[mid]==key)
        {
            ans = mid;
            s = mid+1; 
        }
        else if (arr[mid]<key)
        {
            s=mid+1;
        }
        else if (arr[mid]>key)
        {
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int n=9;
    int arr[n]={1,2,4,6,6,6,7,7,7};
    int key=7;
    cout<<"First Occurrence of "<<key<<" is index : "<<firstOcc(arr, n, key)<<endl;
    cout<<"Last Occurrence of "<<key<<" is index : "<<lastOcc(arr, n, key)<<endl;
    return 0;
}