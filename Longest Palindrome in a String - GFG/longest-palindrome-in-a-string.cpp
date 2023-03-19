//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
       int l,h;
       int start =0;
       int end = 1;
       for(int i =1;i<s.length();i++){
           l=i-1;
           h=i;
           while(l>= 0 && h<s.length() && s[l]==s[h]){
              if(h-l+ 1 > end ){
                  start = l;
                  end = h-l+1;
              }
               l--;
               h++;
           }
             l=i-1;
           h=i+1;
           while(l>= 0 && h<s.length() && s[l]==s[h]){
              if(h-l+ 1 > end ){
                  start = l;
                  end = h-l+1;
              }
               l--;
               h++;
           }
      }
      string temp ="";
      int j=0;
      for(int i = start ;i<start+end ;i++){
          temp =temp+ s[i];
          
      }
      return temp;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends