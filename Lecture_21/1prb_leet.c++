// Rotate Array(189) : Rotate an array by given value.
#include<iostream>
using namespace std;

void printArray(int a[], int n){
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void rotateArray(int a[], int n, int key){
    int temp[100];
    for (int i = 0; i < n; i++)
    {
        temp[(i+key)%n]=a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i]=temp[i];
    }
}

int main(){
    int n=7;
    int a[n]={2,3,5,6,7,9,10};
    int key=6;

    printArray(a, n);
    rotateArray(a, n, key);
    printArray(a, n);
    return 0;
}