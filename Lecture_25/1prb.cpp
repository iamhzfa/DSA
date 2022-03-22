#include<iostream>
using namespace std;

int main(){
    int n=5;
    cout<<"The number is "<<n<<endl;
    // Address operator
    cout<<"The address of n = "<<n<<" is "<<&n<<endl;
    // Create the pointer -> Pointer store the address of the number
    int *ptr=&n;
    // ptr -> stores only the address of the number in seperate memory block
    cout<<"The address store in pointer is "<<ptr<<endl;
    // *ptr -> stores the value of the address
    cout<<"The Value store in pointer is "<<*ptr<<endl;

    cout<<"Size of Integer is "<<sizeof(n)<<endl;
    cout<<"Size of Pointer is "<<sizeof(ptr)<<endl;

    // copying of pointer
    int *p=ptr;
    cout<<p<<endl;
    cout<<*p<<endl;

    int i=3;
    int *q=&i;
    // increament of pointer(*q++)
    cout<<"*q before increament "<<*q<<endl;
    *q = *q+1;
    cout<<"*q after increament "<<*q<<endl;

    // increament of pointer address(q++)
    cout<<"q before increament "<<q<<endl;
    q = q+1;
    cout<<"q after increament "<<q<<endl;

    return 0;
}