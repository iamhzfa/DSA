#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortZOT(int arr[], int n){
    int z=0, o=0, t=0;
    int index=0;

    for(int i=0; i<n; i++){
        if (arr[i]==0)
            z++;
        else if(arr[i]==1)
            o++;
        else{
            t++;
        }
    }
    cout<<z<<" "<<o<<" "<<t<<endl;

    while(z!=0){
        arr[index]=0;
        index++;
        z--;
    }
    while(o!=0){
        arr[index]=1;
        index++;
        o--;
    }
    while(t!=0){
        arr[index]=2;
        index++;
        t--;
    }
}

int main(){
    int n =9;
    int arr[n]={0,2,2,1,0,1,1,0,2};
    printArray(arr,n);
    sortZOT(arr,n);
    printArray(arr,n);

    return 0;
}