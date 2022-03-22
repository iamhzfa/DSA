#include<iostream>
using namespace std;

int main(){
    int i = 6;
    int* p = &i;
    int** q = &p;

    cout<<"---------"<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;
    cout<<"---------"<<endl;
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*q<<endl;
    cout<<"---------"<<endl;
    cout<<&p<<endl;
    cout<<q<<endl;
    cout<<"---------"<<endl;
    int*** r = &q;
    cout<<***r<<endl;
    cout<<"---------"<<endl;
    int *a = **r;
    cout<<*a<<endl;
    cout<<"---------"<<endl;

    return 0;
}