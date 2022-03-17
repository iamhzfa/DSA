// Array : Sum of Two Arrays(16) 
#include<iostream>
using namespace std;

void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void sumArrays(int a[], int b[], int n, int m){
    int i=n-1;
    int j=m-1;
    int ans[100], k=0, carry=0;
    while (i>=0 && j>=0)
    {
        int sum = a[i]+b[j]+carry;
        ans[k] = sum % 10;
        k++;
        carry = sum / 10;
    }
    while (i>=0)
    {
        int sum = a[i]+carry;
        ans[k++]=sum%10;
        carry=sum/10;
    }
    while (j>=0)
    {
        int sum = a[j]+carry;
        ans[k++]=sum%10;
        carry=sum/10;
    }
    
    while (carry!=0)
    {
        ans[k++] = carry;
    }
    
    // printArray(ans,100);
    for(int l=0; l<100; l++)
        cout<<ans[l]<<" ";
    cout<<endl;
}

int main(){
    int n=6;
    int m=2;
    int a[n]={2,3,5,6,9,10};
    int b[m]={10,15};

    printArray(a,n);
    printArray(b,m);

    sumArrays(a,b,n,m);


    return 0;
}