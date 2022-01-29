// Binary Search : find the pivot element
// sorted array  such as {1,2,3,5,6,8}
// we rotated this array {5,6,8,1,2,3}
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

int main(){
    int n=6;
    int arr[n]={5,6,8,1,2,3};
    cout<<"Pivot Index is "<<pivot(arr, n);
    return 0;
}
