// Rotate an array 90 degrees by clock or anti clock wise.
#include<iostream>
#include<vector>
using namespace std;

// Rotate array anti clock wise by 90 degree.
void rotateAntiClock(int matrix[][4]){
    vector<int> ans;
        int totalRows = 4;
        int totalCols = 4;
        
        for(int row=0; row<totalRows; row++){
            for(int col=0; col<totalCols; col++){
                ans.push_back(matrix[row][col]);      
            }
        }    
        
        int index=0;
        for(int j=0; j<totalCols; j++){
            for(int i=totalRows-1; i>=0; i--){
                matrix[i][j]=ans[index++];
            }
        }
         cout<<" This is Rotated Array 90 degrees by Anti clock wise : "<<endl;
    	 for(int row=0; row<totalRows; row++){
            for(int col=0; col<totalCols; col++){
                cout<<matrix[row][col]<<" ";      
            }
            cout<<endl;
        }  
}

// Rotate array clock wise by 90 degree.
// some mistake in this code, so this is not generate accurate ans.

// void rotateClock(int matrix[][4]){
//      vector<int> ans;
//         int totalRows = 4;
//         int totalCols = 4;
        
//         for(int row=0; row<totalRows; row++){
//             for(int col=0; col<totalCols; col++){
//                 ans.push_back(matrix[row][col]);      
//             }
//         }    
        
//         int index=0;
//         for(int j=totalCols-1; j>=0; j--){
//             for(int i=0; i<totalRows; i++){
//                 matrix[i][j]=ans[index++];
//             }
//         }

//         cout<<" This is Rotated Array 90 degrees by clock wise : "<<endl;
//     	 for(int row=0; row<totalRows; row++){
//             for(int col=0; col<totalCols; col++){
//                 cout<<matrix[row][col]<<" ";      
//             }
//             cout<<endl;
//         }  
// }


int main(){
    int matrix[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    // for printing output
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout<<matrix[row][col]<<" ";
        }        
        cout<<endl;
    }    

    rotateAntiClock(matrix);
    cout<<"-------------------"<<endl;
    // rotateClock(matrix);
    return 0;
}