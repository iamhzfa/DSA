// Pair Sum(401) : find the pair which value is equal to k value.
#include<iostream>
using namespace std;

void sum(int arr[], int size, int k){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i]+arr[j]==k)
                cout<<arr[i]<<" + "<<arr[j]<<" = "<<k<<endl;
        }
        
    }
    
}

int main(){
    int n=6;
    int k=7;
    int arr[n]={3,4,2,3,5,6};
    sum(arr, n, k);
    return 0;
}