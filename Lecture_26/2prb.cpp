#include<iostream>
using namespace std;

void print(int *p){
    cout<< *p << endl;
}
void update(int *p){
    // p=p+1;
    // cout<<"In update function p is "<<p<<endl;
    *p=*p+1;
}

int main(){
    int val=5;
    int *p = &val;

    cout<<p<<endl;
    cout<<*p<<endl;
    print(p);
    // cout<<"Before "<<p<<endl;
    // update(p);
    // cout<<"after "<<p<<endl;
    cout<<"Before value "<<*p<<endl;
    update(p);
    cout<<"after value "<<*p<<endl;
    

    return 0;
}