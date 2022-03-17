// Array: Check if array is sorted and rotated(1752)
#include<iostream>
using namespace std;

void printArray(int a[], int n){
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
bool sortRotateCheck(int a[], int n){
    int count=0;
    for (int i = 1; i < n; i++)
    {
        if (a[i-1]>a[i])
            count++;        
    }
    if(a[n-1]>a[0])
        count++;
    
    
    if(count<=1){
        return true;
    }
    else
        return false;
}

int main(){
    int n=7;
    int a[n]={7,9,3,10,2,5,6};

    // 0 for false 
    // 1 for true
    printArray(a, n);
    int ans = sortRotateCheck(a, n);
    cout<<ans;
    
    return 0;
}