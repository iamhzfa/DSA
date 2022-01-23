// Array: Intersection of two arrays(8)
// Quetion :: Here given two arrays size of N, M respectively. Both are none-decreasing order. Find the intersection b/w both array.
#include<iostream>
using namespace std;

void intersection(int arr[], int arr1[], int n, int n1){
    int arr2[10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if(arr[i]==arr1[j]){
                cout<<arr[i]<<" "; 
                arr1[j]=-112;//we update our array taki yeh dubara loop m check nhi hoye
                break;
            }
        }        
    }
}

int main(){
    int n=6;
    int n1=4;
    int arr[n]={1, 2, 2, 2, 3, 4};
    int arr1[n1]={2, 2, 3, 3};
    intersection(arr, arr1, n, n1);
    cout<<arr1[1]<<endl;
    // cout<<answer;
    return 0;
}