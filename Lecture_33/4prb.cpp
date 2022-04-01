// Array with Recursion :- Binary search
#include<iostream>
using namespace std;

void print(int *arr, int s, int e){
    for (int i = s; i <= e; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

bool binarySearch(int *arr, int key, int strt, int end){
    print(arr,strt,end);
    // base case
    if(strt>end)
        return false;
    
    int mid = strt + (end-strt)/2;

    if(arr[mid]==key)
        return true;
    if(arr[mid]>key)
        return binarySearch(arr, key, strt, mid-1);
    else
        return binarySearch(arr, key, mid+1, end);
    
}

int main(){
    int arr[6]={1,3,4,7,8,9};
    int n=6;
    int key = 9;

    int strt = 0;
    int end = n-1;

    cout<<endl;
    if(binarySearch(arr, key, strt, end))
        cout<<"Value present in array";
    else
        cout<<"Value not present in array";
    cout<<endl;

    return 0;
}