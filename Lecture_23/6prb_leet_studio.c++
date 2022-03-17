//  Spiral print of 2d array (matrix).
//  Leet Code ,Code Studio (spiral matrix).
#include<iostream>
using namespace std;

void spiralPrint(int matrix[][4]){
        int row = 3;
        int col = 4;
        
        int count=0;
        int total=row*col;
        
        //indexes
        int startRow=0;
        int startCol=0;
        int endRow=row-1;
        int endCol=col-1;
        
        while(count<total){
            //print starting row
            for(int index=startCol; count<total && index<=endCol; index++){                   cout<<matrix[startRow][index]<<" ";
                count++;             
            }
            startRow++;
            
            //print end column
            for(int index=startRow; count<total && index<=endRow; index++){
                cout<<matrix[index][endCol]<<" ";
                count++;
            }
            endCol--;
            
            //print end row
            for(int index=endCol; count<total && index>=startCol; index--){
                cout<<matrix[endRow][index]<<" ";
                count++;
            }
            endRow--;
            
            //print start column
            for(int index=endRow; count<total && index>=startRow; index--){
                cout<<matrix[index][startCol]<<" ";
                count++;
            }
            startCol++;
                
        }
}

int main(){
    int matrix[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    // for printing output
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<matrix[row][col]<<" ";
        }        
        cout<<endl;
    }    

    spiralPrint(matrix);

    return 0;
}