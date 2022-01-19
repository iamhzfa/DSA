/* 
Draw a Pattern :
    1111
     222
      33
       4
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int space=i-1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int j=n-i+1;
        while (j)
        {
            cout<<i;
            j--;
        }
        cout<<endl;
        i++;
    }
    
}