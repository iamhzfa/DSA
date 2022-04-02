// Calculate the power using recursion
#include<iostream>
using namespace std;

int power(int n, int b){
    // base case
    if(b == 0)
        return 1;
    if(b==1)
        return n;

    // time complexity O(log(n))
    int ans = power(n, b/2);

    if(b&1)
        return n * ans * ans;
    else    
        return ans * ans;

    // other method -> time complexity O(n)
    // return n*power(n, b-1);
}

int main(){
    int n;
    cin>>n;
    int a;
    cin>>a;

    int ans = power(n, a);
    cout<<"The Answer is : "<<ans<<endl;

    return 0;
}