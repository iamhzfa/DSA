// Array with Recursion :- calculate total sum of array elements
#include<iostream>
using namespace std;

int arraySum(int *arr, int size){
    // base case
    if(size==0)
        return 0;
    if(size==1)
        return arr[0];

    // recursive call
    int remainingArray = arraySum(arr+1,size-1);
    int sum = arr[0] + remainingArray;
    
    return sum;
}

int main(){
    int n=6;
    int arr[n]={3,4,1,6,8,9};

    cout<<endl;
    cout<<arraySum(arr, n);
    cout<<endl;

    return 0;
}