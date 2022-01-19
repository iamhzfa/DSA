// Lecture 5: Bitwise Operators, For Loop, Operator Precedence and Variable Scoping.
#include<iostream>
using namespace std;

int main(){
    int a=4;
    int b=6;

    cout<<"a & b : "<< (a&b)<< endl;
    cout<<"a | b : "<< (a|b)<< endl;
    cout<<"  ~a  : "<< ~a<< endl;
    cout<<"a ^ b : "<< (a^b)<< endl;

    cout<<"One time Left shift : "<< (21<<1)<<endl;
    cout<<"two time Left shift : "<< (21<<2)<<endl;
    cout<<"One time Right shift : "<< (17>>1)<<endl;
    cout<<"two time Right shift : "<< (17>>2)<<endl;
}