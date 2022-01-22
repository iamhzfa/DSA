// For knowing number is odd or even.
#include<iostream>
using namespace std;

// bool isEven(int num){
//     if(num%2==0)
//         return true;
//     return false;
// }
bool isEven(int num){
    if(num & 1)
        return false;//false means odd
    return true;//true means even
}

int main(){
    int a;
    cin>>a;
    if(isEven(a))
        cout<<"Number is Even";
    else
        cout<<"Number is Odd";
    // return 0;
}