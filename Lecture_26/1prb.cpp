#include<iostream>
using namespace std;

int main(){
    int arr[10]={4,7,3,6};//Null array

    cout<<"The address of starting index in array is "<<arr<<endl;
                        //or
    cout<<"The address of starting index in array is "<<&arr<<endl;
                        //or
    cout<<"The address of starting index in array is "<<&arr[0]<<endl;


    cout<<"The Value of starting index in array is "<<*arr<<endl;
    // add 1 in the value of *arr => *arr + 1 = 4+1 = 5
    cout<<(*arr + 1)<<endl;
    // add 1 in the value of *arr => (*arr) + 1 = (4)+1 = 5
    cout<<(*arr) + 1<<endl;
    // increament 1 index in address of arr starting index => means arr[0] converted into arr[0+1] = arr[1] => and then find its value => *(arr + 1) => *(arr[1]) = 7
    cout<<*(arr + 1)<<endl;

    int i=2;
    cout<<i[arr]<<endl;
    int j=3;
    cout<<j[arr]<<endl;

    return 0;
}