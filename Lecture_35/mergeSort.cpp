// Merge Sort O(nlog(n))
#include<iostream>
using namespace std;

void print(int *arr, int n){
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;    
}

// this is babbar method
void merge(int *arr, int s, int e){
    int mid = s+(e-s)/2;

    int len1 = mid-s+1;
    int len2 = e - mid;
    // create two arrays
    int *first = new int(len1);
    int *second = new int(len2);
    // copy the values
    int k = s;
    for(int i=0;i<len1;i++)
        first[i]=arr[k++];
    k = mid+1;
    for(int i=0;i<len2;i++)
        second[i]=arr[k++];

    int index1=0;
    int index2=0;
    k = s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2])
            arr[k++]=first[index1++];
        else
            arr[k++]=second[index2++];
    }
    while(index1<len1)
        arr[k++]=first[index1++];
    while(index2<len2)
        arr[k++]=second[index2++];

     delete []first;
     delete []second;
}

// this is code with harry method
// void merge(int A[], int low, int high)
// {
//     int i, j, k;
//     int mid = low+(high-low)/2;
//     i = low;
//     j = mid + 1;
//     k = low;
//     // new array
//     int *B = new int[high];

//     // compare two values
//     while (i <= mid && j <= high)
//     {
//         if (A[i] < A[j])
//             B[k++] = A[i++];
//         else
//             B[k++] = A[j++];
//     }

//     while (i <= mid)
//         B[k++] = A[i++];
//     while (j <= high)
//         B[k++] = A[j++];

//     // copy the values from array B to array A
//     for (int i = low; i <= high; i++)
//         A[i] = B[i];

// }


void mergeSort(int *arr, int s, int e){
    // base case
    if(s>=e)
        return ;
    int mid = s+(e-s)/2;
    // left part (divide the array of its half length)
    mergeSort(arr, s, mid);
    // right part
    mergeSort(arr, mid+1, e);
    // Merge the array
    merge(arr, s, e);
}

int main(){
    int arr[7]={22,55,22,23,1,0,3};

    print(arr, 7);
    mergeSort(arr,0,7);
    print(arr, 7);

    return 0;
}