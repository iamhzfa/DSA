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
void bubbleSort(int n, int arr[]){
    for (int pass=0; pass<n-1; pass++)
    {
        // cout<<pass<<endl;
        bool swapped = false;
        for (int comparison=0; comparison<n-pass; comparison++)
        {
            if(arr[comparison]>arr[comparison+1]){
                swap(arr[comparison], arr[comparison+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            cout<<"Already Swapped";
            break;
        }
    }
}

int main(){
    int n=7;
    int arr[n]={1,2,3,4,5,6,7};

    print(n,arr);
    bubbleSort(n,arr);
    print(n,arr);
    return 0;
}