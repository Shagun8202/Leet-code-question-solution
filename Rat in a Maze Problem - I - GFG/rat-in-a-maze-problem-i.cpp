//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    bool allow(int x,int y,vector<vector<int>>& visited,vector<vector<int>>&m,int n){
        if((x>=0& x<n) && (y>=0&&y<n) && visited[x][y]==0 && m[x][y]==1){
            return true;
        }
        return false;
    }
    void solve(vector<vector<int>>& m,vector<vector<int>>& visited,vector<string>& ans,int x,int y,int n,string& path){
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        visited[x][y]=1;
        // down
        int newx = x+1;
       int newy = y;
if(allow(newx,newy,visited,m,n)){
    path.push_back('D');
    solve(m,visited,ans,newx,newy,n,path);
    path.pop_back();
}
//left
newx = x;
newy = y-1;
if(allow(newx,newy,visited,m,n)){
    path.push_back('L');
    solve(m,visited,ans,newx,newy,n,path);
    path.pop_back();
}
//Right
newx = x;
newy = y+1;
if(allow(newx,newy,visited,m,n)){
    path.push_back('R');
    solve(m,visited,ans,newx,newy,n,path);
    path.pop_back();
}
//up
newx = x-1;
newy =y;
if(allow(newx,newy,visited,m,n)){
    path.push_back('U');
    solve(m,visited,ans,newx,newy,n,path);
    path.pop_back();
}
visited[x][y]=0;
        
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        int x = 0;
        int y = 0;
        if(m[0][0] == 0){
            return ans;
        }
        
        vector<vector<int>> visited = m;
        for(int i = 0;i<n;i++){
            for(int j =0;j<n;j++){
                visited[i][j]=0;
            }
        }
        string path ="";
        solve(m,visited,ans,x,y,n,path);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

    


//{ Driver Code Starts.

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
}
// } Driver Code Ends