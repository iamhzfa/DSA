#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value : "<<endl;
    cin>>n;
    bool flag = true;
    if(n==1)
        flag=false;
    for (int i = 2; i <= (n/2); i++)
    {
        if(n%i == 0){
            flag = false;
            break;
        }
        flag = true;
    }
    
    if (flag==true)
    {
        cout<<"The Number is Prime";
    }
    else{
        cout<<"The Number is not Prime";
    }    
}