// Array : Swap alternate
#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[], int size){
    for (int i = 0; i < size; i+=2)
    {
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }    
}

int main(){
    int n=6;
    int arr[n] = {2, 3, 1, 5, 4, 7};
    printArray(arr, n);
    swapAlternate(arr, n);
    cout<<"Altrnate Swap Array"<<endl;
    printArray(arr, n);
    return 0;
}