// Array : Find Duplicate(20)
// Question :: given array is N size which containing each number between 1 to N-1 at least once. There is a single integer value present in twice. Our task is to find the twice or duplicate number.
#include<iostream>
using namespace std;

int duplicate(int arr[], int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int j = 1; j < size; j++)
    {
        ans = ans ^ j;
    }    
    return ans;
}

int main(){
    int n = 7;
    int arr[n]={4,6,5,3,6,2,1};//Declare a array of 5 integers.
    int answer = duplicate(arr, 5);
    cout<<"Duplicate value is "<<answer;

    return 0;
}