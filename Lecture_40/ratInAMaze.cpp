// Rate in a Maze problem
// Given a square matrix of size 4*4 (i.e. here 'N' = 4):
// 1 0 0 0
// 1 1 0 0
// 1 1 0 0
// 0 1 1 1 
// Expected Output:
// DDRDRR DRDDRR 
// i.e. Path-1: DDRDRR and Path-2: DRDDRR

// The rat can reach the destination at (3, 3) from (0, 0) by two paths, i.e. DRDDRR and DDRDRR when printed in sorted order, we get DDRDRR DRDDRR.

// question link :-
// https://www.codingninjas.com/codestudio/problems/rat-in-a-maze_1215030


// #include<iostream>
// #include<vector>
// using namespace std;

// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    private: 
        bool isSafe(vector<vector<int>>& arr, int n, int x, int y, vector<vector<int>> visited){
            if ((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && arr[x][y]==1)
                return true;
            else
                return false;
        }

        void solve(vector<vector<int>>& arr, int n, vector<string>& ans, int x, int y, vector<vector<int>> visited, string path){
            // you have reached x and y position 
            // base case 
            if(x==n-1 && y==n-1){
                ans.push_back(path);
                return ;
            }

            visited[x][y]=1;
        
            // we have 4 choises : Down, Left, Right, Up
        
            //when we choose ---- Down 
            int newX = x+1;
            int newY = y;
            if(isSafe(arr, n, newX, newY, visited)){
                path.push_back('D');
                solve(arr, n, ans, newX, newY, visited, path);
                path.pop_back();
            }
        
            //when we choose ---- Left 
            newX = x;
            newY = y-1;
            if(isSafe(arr, n, newX, newY, visited)){
                path.push_back('L');
                solve(arr, n, ans, newX, newY, visited, path);
                path.pop_back();
            }
        
            //when we choose ---- Right 
            newX = x;
            newY = y+1;
            if(isSafe(arr, n, newX, newY, visited)){
                path.push_back('R');
                solve(arr, n, ans, newX, newY, visited, path);
                path.pop_back();
            }
        
            //when we choose ---- Up 
            newX = x-1;
            newY = y;
            if(isSafe(arr, n, newX, newY, visited)){
                path.push_back('U');
                solve(arr, n, ans, newX, newY, visited, path);
                path.pop_back();
            }
        }



    public:
        vector<string> findPath(vector<vector<int>> &m, int n) {
            // Your code goes here
            vector<string> ans;
            if(m[0][0]==0)
                return ans;
            int srcX = 0;
            int srcY = 0;
            vector <vector<int>> visited = m;
            // initialize with 0
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                    visited[i][j]=0;
            }
        
            string path = "";
        
            solve(m, n, ans, srcX, srcY, visited, path);
        
            // because we give answer in a sorted manner
            sort(ans.begin(), ans.end());
            return ans;
        }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends

// int main(){


//     return 0;
// }