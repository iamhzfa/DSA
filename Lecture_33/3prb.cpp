// Array with Recursion :- linear search
#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    // base case
    if(size==0)
        return false;
    if(arr[0]==key)
        return true;
    else
        return linearSearch(arr+1, size-1, key);
    
}

int main(){
    int n=6;
    int arr[n]={3,4,1,7,8,9};
    int key = 9;

    cout<<endl;
    if(linearSearch(arr, n, key))
        cout<<"Value present in array";
    else
        cout<<"Value not present in array";
    cout<<endl;

    return 0;
}