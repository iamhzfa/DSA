// How to print an array like a wave (print like a wave)?
#include<iostream>
using namespace std;

void printArrayLikeWave(int arr[][4]){
    // for printing output
    for (int col = 0; col < 4; col++)
    {
        if (col&1)
        {
            // odd index -> bottom to top
            for (int row = 3-1; row >= 0; row--)
            {
                cout<<arr[row][col]<<" ";
            }     
        }
        else
        {
            // even index -> top to bottom
            for (int row = 0; row < 3; row++)
            {
                cout<<arr[row][col]<<" ";
            }        
        }            
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

    printArrayLikeWave(arr);
    
    return 0;
}