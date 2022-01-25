#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortZOT(int arr[], int n){
    int start=0, mid=0, end=n-1;
    while(mid<=end){
        if (arr[mid]==0)
        {
            swap(arr[start],arr[mid]);
            start++;
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[end]);
            end--;
        }
        else
        {
            mid++;
        }        
    }
}

int main(){
    int n =9;
    int arr[n]={0,2,1,0,0,1,1,0,2};
    printArray(arr,n);
    sortZOT(arr,n);
    printArray(arr,n);

    return 0;
}