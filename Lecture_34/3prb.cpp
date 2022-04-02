// Check palindrome or not ?
#include<iostream>
using namespace std;

// first method :- In this we take string and then we reversed the string. After that we compare both string and reversed string.     
// Time complexity is O(n)

// string reverse(string a, int i, int j){
//     if(i>=j)
//         return a;
//     swap(a[i++],a[j--]);
//     return reverse(a, i, j);
// }

// int main(){
//     string a = "abba";
//     int i=0;
//     int j=a.length()-1;
//     cout<<endl<<a<<endl; 
//     string aCopy = reverse(a, i, j);
//     cout<<endl<<aCopy<<endl;    
//     if (a==aCopy)
//         cout<<"This string is Palindrome"<<endl;
//     else
//         cout<<"This string is not Palindrome"<<endl;

//     return 0;
// }



// Second method :- In this we take two pointer and then compare both pointers if it is equal or not.
// Time complexity is O(log(n))

bool isPalindrome(string str, int s, int e){
    if(s>=e)
        return true;
    if(str[s] != str[e])
        return false;
    else
        return isPalindrome(str, s+1, e-1);
}

int main(){
    string a = "abbccbba";
    int i=0;
    int j=a.length()-1;
    if (isPalindrome(a, i, j))
        cout<<endl<<"This string is Palindrome"<<endl<<endl;
    else
        cout<<endl<<"This string is not Palindrome"<<endl<<endl;

    return 0;
}
