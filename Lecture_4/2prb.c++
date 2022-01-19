/* 
Draw a Pattern :
    3 2 1 
    3 2 1
    3 2 1
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        int bt = n;
        while (j<=n)
        {
            cout<<bt<<" ";
            bt--;
            j++;
        }
        cout<<endl;
        i++;
    }
}


/* Other Way

int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<(n-j+1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
*/