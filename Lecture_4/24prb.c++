/* 
Draw a Pattern :
   1
  121
 12321
1234321
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        // space print karo
        int space=n-i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        // Number print karo
        int j=1;
        int bt=1;
        while (j<=i)
        {
            cout<<bt;
            bt++;
            j++;
        }
        // print third triangle
        int start = i-1;
        while (start)
        {
            cout<<start;
            start--;
        }
        
        cout<<endl;
        i++;        
    }
    
}