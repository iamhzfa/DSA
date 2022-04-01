// Array with Recursion :- check array is sorted or not
#include<iostream>
using namespace std;

bool checkArrSorted(int *arr, int size){
    // base case
    if(size==0 || size==1)
        return true;
    if(arr[0]>arr[1])
        return false;
    else{
        // recursive call
        bool remainingArray = checkArrSorted(arr+1, size-1);
        return remainingArray;
    }

}

int main(){
    int n=6;
    int arr[n]={3,4,1,7,8,9};

    cout<<endl;
    if(checkArrSorted(arr, n))
        cout<<"Array is Sorted";
    else
        cout<<"Array is not Sorted";
    cout<<endl;

    return 0;
}