// Lecture 29 :- 2D array read in code studio guided path
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    // creating dynamic 2d array (when row and columns are same)
    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
        arr[i] = new int[n];

    cout<<endl;
    // taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin>>arr[i][j];
    }
    cout<<endl;
    // showing output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    // releasing memory
    // delete columns
    for (int i = 0; i < n; i++)
        delete [] arr[i];
    // delete rows
    delete [] arr;    
    

    return 0;
}