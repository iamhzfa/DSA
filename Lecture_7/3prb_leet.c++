#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number : "<<endl;
    cin>>n;
    bool flag = false;
    for (int i = 0; i < 31; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            flag = true;
        }        
    }    
    if (flag == true)
        cout<<"TRUE";
    else
        cout<<"FALSE";    
}