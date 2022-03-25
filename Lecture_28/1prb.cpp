#include<iostream>
using namespace std;

void update(int n){
    // call by value
    // this is pass by value function :- and in this type of function it always create a copy
    n++;
}
void updateRef(int& n){
    // call by Reference
    // this is pass by Reference function :- and in this type of function it always point the address of variable which is already created.
    n++;
}

int main(){
    int i=6;
    // create reference variable
    int& j=i;

    cout<<i<<endl;
    cout<<j<<endl;
    i++;//when we increament i then i and j both values increase bcoz both point same memory block 
    cout<<i<<endl;
    cout<<j<<endl;
    j++;//when we increament j then i and j both values increase bcoz both point same memory block
    cout<<i<<endl;
    cout<<j<<endl;

    cout<<endl<<"----------------------"<<endl<<endl;

    int n=5;
    cout<<n<<endl;
    update(n);
    // this is pass by value function :- and in this type of function it always create a copy
    cout<<n<<endl;

    cout<<endl<<"----------------------"<<endl<<endl;

    cout<<n<<endl;
    updateRef(n);
    // this is pass by Reference function :- and in this type of function it always point the address of variable which is already created.
    cout<<n<<endl;

    // Dynamic array read in code studio guided path

    return 0;
}