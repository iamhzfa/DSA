// Reverse a string using recursion
#include<iostream>
using namespace std;

// first method :- using call by reference
void reverse(string& a, int i, int j){
    cout<<endl<<"call recieved for "<<a<<endl;
    if(i>=j)
        return ;
    swap(a[i++],a[j--]);
    reverse(a, i, j);
}

// second method :-
// string reverse(string a, int i, int j){
//     if(i>=j)
//         return a;
//     swap(a[i++],a[j--]);
//     return reverse(a, i, j);
// }

int main(){
    string a = "huzefa";
    int i=0;
    int j=a.length()-1;
    cout<<endl<<a<<endl; 
    reverse(a, i, j);
    cout<<endl<<a<<endl;    

    // second method
    // string a;
    // cout<<"Enter a string : "<<endl;
    // cin>>a;
    // int i=0;
    // int j=a.length()-1;
    // cout<<reverse(a, i, j);

    return 0;
}