// Array : Start reversing an array with given value using two pointers approach.
#include<iostream>
using namespace std;

void printArray(int n, int arr[]){
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;    
}
void reversArray(int n, int arr[], int m){
    int s=m+1, e=n-1;
    while (s<=e)
    {
        swap(arr[s], arr[e]);
        s++;e--;
    }
    
}
int main(){
    int n=8;
    int arr[n]={2,3,6,4,3,6,9,1};
    int key=3;
    
    printArray(n,arr);
    reversArray(n,arr,key);
    printArray(n,arr);
    return 0;
}