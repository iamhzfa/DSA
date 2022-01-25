// Sort 0,1 : this is two pointer appraoch question
#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortZeroOne(int arr[], int n){
    int left=0;
    int right=n-1;
    while (left<right)
    {
        if (arr[left]==0)
            left++;
        else if(arr[right]==1)
            right--;
        else if (arr[left]==1 && arr[right]==0)
        {
            int temp=arr[right];
            arr[right]=arr[left];
            arr[left]=temp;
        }
    }    
}
// void sortZeroOne(int arr[], int n){
//     int left=0;
//     int right=n-1;
//     while (left<right)
//     {
//         while(arr[left]==0)
//             left++;
//         while(arr[right]==1)
//             right--;
//         if (arr[left]==1 && arr[right]==0 && left<right)
//         {
//             int temp=arr[right];
//             arr[right]=arr[left];
//             arr[left]=temp;
//         }        
//     }    
// }

int main(){
    int n=8;
    int arr[n]={1,1,0,0,0,0,1,0};
    printArray(arr, n);
    sortZeroOne(arr, n);
    printArray(arr, n);
    return 0;
}