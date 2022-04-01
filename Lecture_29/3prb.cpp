#include<iostream>
using namespace std;

int main(){

    // 1 ->
    // float f = 10.5;
    // float p = 2.5;
    // float* ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout<<f<<endl;
    // cout << *ptr << " " << f << " " << p;

    // 2 ->
    // int a = 7;
    // int b = 17;
    // int *c = &b; 
    // a = *c;
    // *c = *c + 1;
    // cout  << a << "  " << b << endl;

    // 3 ->
    // int a = 7;
    // int b = 17;
    // int *c = &b;
    // *c = 7;
    // cout  << a << "  " << b << endl;

    // 4 ->
    // int *ptr = 0;
    // int a = 10;
    // *ptr = a;
    // cout << *ptr << endl;

    // 5 ->
    //  char ch = 'a';
    // char* ptr = &ch;
    // ch++;
    // cout << *ptr << endl;

    // 6 ->
    // int a = 7;
    // int *c = &a;
    // c = c + 1;
    // cout  << a << "  " << *c << endl;

    // 7 ->
    // int a = 7;
    // int *c = &a;
    // c = c + 3;
    // cout  << c << endl;

    // 8 ->
    int a[] = {1, 2, 3, 4};
    cout << *(a) << " " << *(a+1);

    return 0;
}