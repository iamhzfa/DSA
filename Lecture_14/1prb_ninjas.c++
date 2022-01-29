// Binary Search : Searching in a rotated array.
#include<iostream>
using namespace std;

int pivot(int arr[], int n){
    int s=0, e=n-1, mid=s+(e-s)/2;
    while (s<e)
    {
        if(arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binarySearch(int arr[], int s, int e, int key){
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if (arr[mid]==key){
            cout<<mid<<endl;
            return mid;
        }
        else if (arr[mid]>key)
            e = mid-1;
        else
            s = mid+1;
        mid = s+(e-s)/2;        
    }
    return mid;    
}

int main(){
    int n=6;
    int arr[n]={8,9,1,2,6,7};
    int key=8;
    int piv = pivot(arr,n);
    cout<<"Pivot index is "<<piv<<endl;
    
    if (key>arr[piv] && key<arr[n-1]){
        cout<<"This is line 2"<<endl<<"Key value index is ";
        return binarySearch(arr, piv, n-1, key);
    }
    else{
        cout<<"This is line 1"<<endl<<"Key value index is ";
        return binarySearch(arr, 0, piv-1, key);    
    }

    return 0;
}
