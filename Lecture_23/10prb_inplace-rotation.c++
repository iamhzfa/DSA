// find the transpose of a matrix.
#include<iostream>
using namespace std;

void printMatrix(int arr[][4]){
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
        for (int j = i; j < i; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
}

void inplaceRotationClockWise(int arr[][4]){
    transposeMatrix(arr);
    int row = 4-1;
    int col = 4-1;
    for (int i = 0; i < 4; i++)
    {
        for (int point1 = 0,point2=col; point1 < point2; point1++,point2--)
        {
            swap(arr[i][point1],arr[i][point2]);
        }        
    }    
}

int main(){
    int matrix[4][4]={10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    
    cout<<"----------- THIS IS MATRIX ------------"<<endl;
    printMatrix(matrix);
    cout<<"-------- Rotate the MATRIX by 90 degrees ---------"<<endl;
    inplaceRotationClockWise(matrix);
    cout<<"----------- THIS IS MATRIX ------------"<<endl;
    // for printing the transpose of matrix
    printMatrix(matrix);

    return 0;
}