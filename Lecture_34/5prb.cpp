// Bubble sort using recursion
#include<iostream>
using namespace std;

void print(int *arr, int n){
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;    
}

void bubbleSort(int *arr, int n){
    // base case
    if(n == 0 || n == 1)
        return ;

    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1])
            swap(arr[i], arr[i+1]);
    }
    
    bubbleSort(arr, n-1);
}

int main(){
    int arr[6]={2,5,9,8,1,7};

    print(arr,6);
    bubbleSort(arr,6);
    print(arr,6);

    return 0;
}