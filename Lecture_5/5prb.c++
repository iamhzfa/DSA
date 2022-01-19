#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value : "<<endl;
    cin>>n;
    bool flag = true;
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0){
            flag = false;
            break;
        }
    }
    
    if (flag==true)
    {
        cout<<"The Number is Prime";
    }
    else{
        cout<<"The Number is not Prime";
    }    
}