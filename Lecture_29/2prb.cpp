// Lecture 29 :- 2D array read in code studio guided path
#include<iostream>
using namespace std;

int main(){

    int row;
    cin>>row;

    int col;
    cin>>col;

    // creating dynamic 2d array (when row and columns are different)
    int** arr = new int*[row];
    for (int i = 0; i < row; i++)
        arr[i] = new int[col];

    cout<<endl;
    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cin>>arr[i][j];
    }
    cout<<endl;
    // showing output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    // releasing memory
    // delete columns
    for (int i = 0; i < row; i++)
        delete [] arr[i];
    // delete rows
    delete [] arr;    
    

    return 0;
}