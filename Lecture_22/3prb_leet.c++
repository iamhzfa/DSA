// Valid Palindrom (125) -- garbad
#include<iostream>
using namespace std;

bool valid(char ch){
    if ( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>=0 && ch<=9) )
        return 1;
    else
        return 0;    
}
int isLower(char ch){
    if((ch>='a' && ch<='z') || (ch>=0 && ch<=9))
        return ch;
    else{
        int temp = ch -'A' + 'a'; 
        return ch;
    }
}
bool isToPalindrom(string s){
    int start=0;
    int end=s.length()-1;
    while (start<=end)
    {
        if(s[start] == s[end]){
            start++;
            end--;
        }
        else
            return false;
    }
    return true;
}
bool isPalindrom(string s){
    string temp= " ";
    for (int i = 0; i < s.length(); i++)
    {
        if(valid(s[i]))
            temp.push_back(isLower(temp[i]));
    }
    return isToPalindrom(temp);
}

int main(){
    // char a = 6;
    // if(valid(a))
    //     cout<<"True";
    // else
    //     cout<<"False";

    return 0;
}