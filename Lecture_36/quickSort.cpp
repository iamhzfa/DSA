// Quick Sort 
#include<iostream>
using namespace std;

void print(int *arr, int n){
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;    
} 

int partition(int *arr, int s, int e){
    int pivot = arr[s];
    int i = s+1;
    int j = e;

    while (i<=j){
        while (arr[i]<=pivot)
            i++;
        while(arr[j]>pivot)        
            j--;
        if(i<j)
            swap(arr[i], arr[j]);        
    }

    swap(arr[s], arr[j]); 
    return j;
}

void quickSort(int *arr, int s, int e){
    if(s>=e)
        return ;
    
    int partitionIndex = partition(arr, s, e);

    // left part
    quickSort(arr, s, partitionIndex-1);
    // right part
    quickSort(arr, partitionIndex+1, e);
}

int main(){
    int arr[7]={22,55,22,23,1,0,3};

    print(arr, 7);
    quickSort(arr, 0, 7);
    print(arr, 7);

    return 0;
}