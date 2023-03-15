//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
           unordered_map<int,int> mp;
           for(int i =0;i<n1;i++){
               mp[A[i]]++;
           }
          unordered_map<int,int> mp1;
         for(int i =0;i<n2;i++){
             mp1[B[i]]++;
         }
         unordered_map<int,int> mp2;
         for(int i =0;i<n3;i++){
             mp2[C[i]]++;
         }
       
         
           vector<int> ans;
           for(auto it:mp){
              if(mp1.find(it.first) != mp1.end() ){
                  if(mp2.find(it.first) != mp2.end()){
                      ans.push_back(it.first);
                  }
              }
           }
           sort(ans.begin(),ans.end());
           return ans;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends