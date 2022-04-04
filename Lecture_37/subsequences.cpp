// Subsequences (Coding ninja's Code studio) answer in Code studio
#include <iostream>
#include <vector>
using namespace std;

void solve(string str, string output, vector<string>& ans, int index){
    // base case
    if(index >= str.length()){
        if(output.length()>0)
        	ans.push_back(output);
        return ;
    }
    
    // exclude (nhi lena hai)
    solve(str, output, ans, index+1);
    // include (lena hai)
    char element = str[index];
    output.push_back(element);
    solve(str, output, ans, index+1);
}

vector<string> subsequences(string str){
	
	// Write your code here
    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, ans, index);
    return ans;
    
}

int main()
{

    return 0;
}