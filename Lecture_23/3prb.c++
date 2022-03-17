#include<iostream>
using namespace std;

void rowSum(int arr[][4], int n, int m){
    for (int row = 0; row < 3; row++)
    {
        int sum=0;
        for (int col = 0; col < 4; col++)
                sum += arr[row][col];
        cout<<row+1<<" Row Sum is : "<<sum<<endl;      
    }  
}

int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    // for printing output
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<arr[row][col]<<" ";
        }        
        cout<<endl;
    }    

    cout<<endl;
    rowSum(arr, 3, 4);

    return 0;
}