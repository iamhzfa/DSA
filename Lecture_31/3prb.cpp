// Recursion :- print reverse counting 
#include<iostream>
using namespace std;

void print(int n){
    // base condition
    if (n == 0)
        return ;

    cout<<n<<endl;
    print(n-1);    

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