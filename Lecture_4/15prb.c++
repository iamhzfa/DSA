/* 
Draw a Pattern :
    D 
    C D
    B C D
    A B C D
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
        char ch='A'+n-i;
        while (j<=i)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}


/*Other Way

int main(){
    int n;
    cin>>n;
    int i=1;
    int bt=n;
    while (i<=n)
    {
        int j=1;
        char ch='A'+bt-1;
        while (j<=i)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        bt--;
        i++;
    }
}
*/
    