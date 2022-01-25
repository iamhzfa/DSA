// Triplet with given Sum(11) : find the triplet which value is equal to k value.
#include<iostream>
using namespace std;

void sum(int arr[], int size, int s){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if(arr[i]+arr[j]+arr[k]==s)
                cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" = "<<s<<endl;
            }
        }        
    }    
}

int main(){
    int n=6;
    int s=10;
    int arr[n]={3,4,2,3,5,6};
    sum(arr, n, s);
    return 0;
}