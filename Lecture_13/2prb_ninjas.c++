// Binary Search : Total number of occurence in array
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
    int arr[n]={1,2,4,6,6,6,6,7,7};
    int key=6;
    int first = firstOcc(arr, n, key);
    int last = lastOcc(arr, n, key);
    int totalOcc = last - first + 1; 
    cout<<"Total number of Occurrence of "<<key<<" is : "<<totalOcc<<endl;
    return 0;
}