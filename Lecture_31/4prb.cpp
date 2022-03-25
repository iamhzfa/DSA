// Recursion :- print counting 
#include<iostream>
using namespace std;

void print(int n){
    // base condition
    if (n == 0)
        return ;

    print(n-1);    
    cout<<n<<endl;

}

int main(){
    cout<<endl;
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    cout<<endl;
    print(n);
    cout<<endl;

    return 0;
}