/* 
Draw a Pattern :
    **** 
     ***
      **
       *
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
        
        int bt=n-i+1;
        while (bt)
        {
            cout<<"*";
            bt--;
        }
        
        cout<<endl;
        i++;
    }

}