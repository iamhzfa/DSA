// how to find the row sum and finding maximum sum value of the row sum.
#include<iostream>
using namespace std;

int rowSum(int arr[][4], int n, int m){
    int max = INT_MIN;
    for (int row = 0; row < 3; row++)
    {
        int sum=0;
        for (int col = 0; col < 4; col++)
                sum += arr[row][col];
        cout<<row+1<<" Row Sum is : "<<sum<<endl;  
        // for finding maximum value in all sums of rows.   
        if (sum>max)
            max = sum;         
    }  
    cout<<"Maximum sum is : ";
    return max;
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
    cout<<rowSum(arr, 3, 4);

    return 0;
}