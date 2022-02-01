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
void selecSort(int n, int arr[]){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[minIndex]>arr[j])
                minIndex=j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    int n=7;
    int arr[n]={7,9,6,3,5,4,1};

    print(n,arr);
    selecSort(n,arr);
    print(n,arr);
    
    return 0;
}