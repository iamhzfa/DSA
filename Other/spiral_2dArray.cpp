#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>> n >> m;
    // for taking input from the user
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    // for showing output to the user
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    
    // spiral order print
    int row_start = 0, row_end = n-1, column_start = 0, column_end = m-1;                      

    while (row_start <= row_end && column_start <=column_end)
    {
        // for starting or first row
        for (int col = column_start; col <= column_end; col++)
        {
            cout << a[row_start][col] << " ";
        }
        // for last column
        row_start++;
        for (int row = row_start; row <= row_end; row++)
        {
            cout << a[row][column_end] << " ";
        }
        // for last row
        column_end--;
        for (int col = column_end; col >= column_start; col--)
        {
            cout << a[row_end][col] << " ";
        }
        // for first column
        row_end--;
        for (int row = row_end; row >= row_start; row--)
        {
            cout << a[row][column_start] << " ";
        }          

        column_start++;
    }    

    return 0;
}