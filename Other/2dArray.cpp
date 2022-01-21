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

    return 0;
}