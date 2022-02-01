#include<iostream>
using namespace std;

void print(int n, int arr[]){
    cout<<"------------------"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"------------------";
}
void insertionSort(int n, int arr[]){
    for (int i = 1; i < n; i++)
    {
        int j=i-1;  // let array is sorted till the J index.
        int key=arr[i]; // key is a value which is compared with the left array or key is a value which we want to add this in our sorted array
        while (arr[j]>key && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    int n=4;
    int arr[n]={7,9,1,6};

    print(n,arr);
    insertionSort(n,arr);    
    print(n,arr);
    return 0;
}