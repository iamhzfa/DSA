// Inversion Count using Merge Sort 
#include<iostream>
using namespace std;

int merge(int *arr, int s, int e){
    int mid = s+(e-s)/2;

    int inversionCount = 0;

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
        else{
            arr[k++]=second[index2++];
            inversionCount += (mid - index1 + 1);
        }
    }
    while(index1<len1)
        arr[k++]=first[index1++];
    while(index2<len2)
        arr[k++]=second[index2++];

     delete []first;
     delete []second;

     return inversionCount;
}

int mergeSort(int *arr, int s, int e){
    // base case
    if(s>=e)
        return 0;
    int mid = s+(e-s)/2;
    int inversionCount = 0;
    // left part (divide the array of its half length)
    inversionCount += mergeSort(arr, s, mid);

    // right part
    inversionCount += mergeSort(arr, mid+1, e);
    // Merge the array
    inversionCount += merge(arr, s, e);

    return inversionCount;
}

int main(){
    int arr[5]={22,22,23,1,0};

    int inversionCount = mergeSort(arr,0,5);
    cout<<inversionCount<<endl;

    return 0;
}