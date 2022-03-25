// Recursion :- factorial
#include<iostream>
using namespace std;

// simple way
// int factorial(int n){
//     // base condition
//     if(n == 0)
//         return 1;
//     // small part
//     int small = factorial(n-1);
//     // big part
//     int big = n * small;

//     return big;
// }

// smart way
int factorial(int n){
    // base condition
    if(n == 0)
        return 1;

    return n * factorial(n-1);
}

int main(){
    cout<<endl;
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int ans = factorial(n);
    cout<<n<<" factorial is "<<ans<<endl<<endl;

    return 0;
}