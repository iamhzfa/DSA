/* 
Draw a Pattern :
    1 2 3 
    4 5 6
    7 8 9
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    int bt = row;
    while (row<n+1)
    {
        int col=1;
        while (col<n+1)
        {
            cout<<bt<<" ";
            bt++;
            col++;
        }
        cout<<endl;
        row++;
    }
}