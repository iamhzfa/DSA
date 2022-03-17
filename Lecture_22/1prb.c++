// Character Array Basics.
#include<iostream>
using namespace std;

char isLower(char ch){
    if(ch >= 'a' && ch <= 'z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int length(char arr[]){
    int count=0;
    for (int i = 0; arr[i] != '\0'; i++)
        count++;
    return count;
}

void reverseString(char arr[], int length){
    int s=0;
    int e=length-1;
    while(s<e)
        swap(arr[s++], arr[e--]);
}

int main(){
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Your name is : "<<name<<endl;

    int size=length(name);
    cout<<"Total length is : "<<size<<endl;

    reverseString(name, size);
    cout<<"Reverse Array is : "<<name<<endl;

    cout<<isLower('H')<<endl;
    cout<<isLower('h')<<endl;

    return 0;
}