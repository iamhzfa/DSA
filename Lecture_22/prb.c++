// Count the prime number.
#include<iostream>
#include<math.h>
using namespace std;

// First way
int prime(int n){
    int count=0;
    if(n<=1)
        return 0;
    else if(n==2)
        count=1;
    else if(n>2)
        count=2;
    for (int j = 4; j <= n; j++)
    {
        int flag=1;
        for (int i = 2; i <= sqrt(j); i++)
        {
            if(j%i == 0){
                flag=0;
                break;
            }
        }
        if(flag==1)
            count++;
    }
    return count;
}

// second way
// int prime(int n){
//     int count=n-1;
//     if (n<=1)
//         return 0;
    
//     for (int i = 3; i <= n; i++)
//     {
//         for (int j = i-1; j > 1; j--)
//         {
//             if (i%j == 0)
//             {
//                 count--;
//                 break;
//             }
//         }        
//     }
//     return count;
// }


int main(){
    int n=29;
    cout<<prime(n);
    return 0;
}