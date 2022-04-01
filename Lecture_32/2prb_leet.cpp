// Recursion :- Count ways to reach Nth stairs.
#include<iostream>
using namespace std;

int countDistinctWayToClimbStairs(int nStairs) {
    if(nStairs<0)
        return 0;
    if(nStairs==0)
        return 1;
    
    // R.C.
    int ans = countDistinctWayToClimbStairs(nStairs-1)+countDistinctWayToClimbStairs(nStairs-2);

    return ans;
        
}

int main(){
    int n;
    cin>>n;

    cout<<endl;

    cout<<countDistinctWayToClimbStairs(n);

    cout<<endl;

    return 0;
}