//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int s,vector<int>& ans,vector<int>& visited,vector<int> adj[]){
        visited[s]=1;
        ans.push_back(s);
        for(auto it:adj[s]){
            if(!visited[it])
            dfs(it,ans,visited,adj);
        }
        return;
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
      vector<int> ans;
      int start=0;
      vector<int> visited(V+1,0);
      dfs(start,ans,visited,adj);
      return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends