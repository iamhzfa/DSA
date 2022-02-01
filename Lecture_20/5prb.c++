// Array : Move zeroes to right side of array
#include<iostream>
using namespace std;

void printArray(int a[],int n){
    for (int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void moveZeroes(int a[], int n){
    int i=0;
    for (int j = 0; j < n; j++)
    {
        if (a[j]!=0)
            swap(a[j],a[i++]);        
    }    
}

int main(){
    int n=9;
    int a[n]={2,0,1,0,0,5,0,9,0};

    printArray(a,n);
    moveZeroes(a,n);
    printArray(a,n);
    
    return 0;
}