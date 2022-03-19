// find the transpose of a matrix.
#include<iostream>
using namespace std;

void printMatrix(int arr[][4]){
    cout<<"-----------THIS IS MATRIX------------"<<endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"  "<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transposeMatrix(int arr[][4]){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
}

int main(){
    int matrix[4][4]={10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    
   
    printMatrix(matrix);
    cout<<"--------THIS IS TRANSPOSE MATRIX---------"<<endl;
    transposeMatrix(matrix);
    // for printing the transpose of matrix
    printMatrix(matrix);

    return 0;
}