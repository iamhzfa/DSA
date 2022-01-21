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
    int num;
    cout<<"Enter the number u want to search : ";
    cin>>num;
    bool flag = false;
    // for showing output to the user
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++){
            if (a[i][j] == num)
            {
                cout<<i<<" "<<j<<" "<<endl;
                flag = true;
            }
        }
    }

    if (flag)
    {
        cout<<"Element is found";
    }
    else
    {
        cout<<"Element not found";
    } 

    return 0;
}