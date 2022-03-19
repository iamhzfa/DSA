// In this we give the number and program check the number is ugly or not (Leet Code : Ugly Number) ?
// Ugly Number : we say the number is ugly if: 
//                                    Number is fully divided by 2, 3, 5  
#include<iostream>
using namespace std;

bool isUgly(int n) {
    while(n>=1){
        if(n%5==0)
            n=n/5;
        if(n%3==0)
            n=n/3;
        if(n%2==0)
            n=n/2;
        if (n==1)
            break;
        if (n>1 && n%5!=0 && n%3!=0 && n%2!=0)
        {
            return 0;
        }   
    }
    return 1;
}

int main(){
    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    if (isUgly(num))
        cout<<"The Number is Ugly";
    else
        cout<<"The Number is Not Ugly";    

    return 0;
}