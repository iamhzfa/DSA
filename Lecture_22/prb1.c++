#include<iostream>
using namespace std;

int main(){
    int n=4;
    int a[n]={-1,4,7,5};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = i; k <= j; k++)
                cout<<a[k]<<" ";
            cout<<endl;
        }        
    }
    
    return 0;
}