// Array : Merge two sorted arrays in first array.
#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";    
}

// This is first approach (Time complexity is O(n)):-

void mergeSorted(int arr1[],int n,int arr2[],int m){
    int i=n-1, j=m-1, k=n+m-1;
    while (j>=0 && i>=0)
    {
        if(arr1[i]<arr2[j]){
            arr1[k]=arr2[j];
            k--;j--;
        }
        else{
            arr1[k]=arr1[i];
            i--;k--;
        }
    }    
    while (j>=0)
    {
        arr1[k]=arr2[j];
        k--;j--;
    }
}

// This is first approach (Time complexity is O(n^2)):-

// void mergeSorted(int arr1[], int n, int arr2[], int m)
// {
//     int size = n;
//     for (int j = 0; j < m; j++)
//     {
//         int key = arr2[j]; 
//         int i = size - 1;          
//         while (i >= 0)
//         {
//             if (key < arr1[i])
//             {
//                 arr1[i + 1] = arr1[i];
                
//                 i--;
//             }
//             else
//                 break;
//         }       
//         arr1[i + 1] = key;
//         size++;
//     }
// }
    
int main(){
    int arr1[4]={2,5,6,7};
    int arr2[3]={1,3,4};
    
    mergeSorted(arr1,4,arr2,3);
    printArray(arr1,7);
    return 0;
}