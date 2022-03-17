// Check if the character array is palindrom or not(0).
#include<iostream>
using namespace std;

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
char isLower(char ch){
    if(ch >= 'a' && ch <= 'z')
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool isPalindrom(char ar[],int len){
    int s=0;
    int e=len-1;
    while (s<=e)
    {
        if(isLower(ar[s]) == isLower(ar[e])){
            s++;e--;
        }
        else
            return false;
    }
    return true;
}

int main(){
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Your name is : "<<name<<endl;

    int size=length(name);

    reverseString(name, size);
    cout<<name<<endl;
    cout<<"Reverse Array is : "<<name<<endl;
    

    if (isPalindrom(name, size))
        cout<<"This comparison is not case sensitive and character array is palindrom"<<endl;
    else
        cout<<"This character array is not palindrom"<<endl;

    return 0;
}