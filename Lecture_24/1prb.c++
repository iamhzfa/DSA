// Count the prime number(leet code, coding ninjas).
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

// This function time complexity is O[n*log(n)].
int countPrimes(int n){
    int count=0;
    vector<bool> prime(n+1, true);
    prime[0]=prime[1]=false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (int j = i*2; j < n; j=j+i)
                prime[j]=0;
        }
    }
    return count;
}

// This function time complexity is O[n^2].
bool isPrime(int n){
    if (n<=1)
        return 0;
    
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n%i==0)
            return 0;
    }
    return 1;    
}
int countPrimes1(int n){
    int count=0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
            count++;
    }
    
    return count;
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    int ans = countPrimes(num);
    cout<<"The Number "<<num<<" have "<<ans<<" Prime numbers"<<endl;
    int ans1 = countPrimes1(num);
    cout<<"The Number "<<num<<" have "<<ans<<" Prime numbers"<<endl;
    

    return 0;
}