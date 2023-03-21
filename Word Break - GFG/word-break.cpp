//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
    private:
    bool help(string a,set<string>& st,int i){
        if(i==a.length()){
            return 1;
        }
        string temp ="";
        for(int j=i;j<a.length();j++){
            temp = temp + a[j];
            if(st.find(temp) !=st.end()){
                if(help(a,st,j+1)) return 1;
            }
        }
        return 0;
    }
public:
    int wordBreak(string A, vector<string> &B) {
  set<string> st;
  for(auto it:B) st.insert(it);
  int ans = help(A,st,0);
  return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends