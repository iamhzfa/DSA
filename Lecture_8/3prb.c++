// How to evaluate a Squar.
#include<iostream>
using namespace std;

int pow(int val, int power){
    int ans = 1;
    for (int i = 1; i <= power; i++)
    {
        ans = ans * val;
    }
    cout<<ans;
    return ans;
}

int main(){
    int a, b;
    cout<<"Enter the Value : "<<endl;
    cin>>a;
    cout<<"Enter the Power : "<<endl;
    cin>>b;
    pow(a, b);
    return 0;
}