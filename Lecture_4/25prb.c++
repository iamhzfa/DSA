/* 
Draw a Pattern :
    1234554321
    1234**4321
    123****321
    12******21
    1********1
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=n;
    int d=1;
    while (i>=1)
    {
        // print first triangle
        int j=1;
        while (j<=i)
        {
            cout<<j;
            j++;
        }
        // print second pattern
        int star=(d-1)*2;
        while (star>0)
        {
            cout<<'*';
            star--;
        }
        // print third pattern
        int k=i;
        while (k>=1)
        {
            cout<<k;
            k--;
        }
        
                
        cout<<endl;
        i--;        
        d++;
    }
    
}