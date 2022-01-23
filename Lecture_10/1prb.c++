// Array Basic Operations
#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<i<<" index value is "<<arr[i]<<" "<<endl;
    }
    cout<<endl;
}

int main(){
    int size;
    cout<<"Enter the size of array :: "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the array element :: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    printArray(arr, size);
    return 0;
}