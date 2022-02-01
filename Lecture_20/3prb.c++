// Array : Merge two sorted arrays in third sorted array.
#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";    
}
void mergeSorted(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0, j=0, k=0;
    while (i<n && j<m)
    {
        if (arr1[i]<arr2[j])
            arr3[k++]=arr1[i++];
            // we also write 
            // arr3[k]=arr1[i];
            // k++;i++;
        else
            arr3[k++]=arr2[j++];          
    }
    while (i<n)
        arr3[k++]=arr1[i++];
    while (j<m)
        arr3[k++]=arr2[j++];
}

int main(){
    int arr1[4]={2,5,6,7};
    int arr2[3]={1,3,4};
    int arr3[7]={0};
    
    mergeSorted(arr1,4,arr2,3,arr3);
    printArray(arr3,7);
    return 0;
}