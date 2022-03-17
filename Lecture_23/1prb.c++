#include<iostream>
using namespace std;


int main(){
    // first way : create 2d array;
    int arr[3][4];

    // second way : create 2d array;
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    // third way : create 2d array;
    // int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    // for taking input from the user
    cout<<"Enter the element::"<<endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin>>arr[row][col];
        }        
    }
    cout<<endl;

    // for printing output
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<arr[row][col]<<" ";
        }        
        cout<<endl;
    }    

    return 0;
}