//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends



int countRev (string s)
{
   stack<int> st;
   int op =0;
   int cl =0;
   if(s.length()%2 != 0) return -1;
   for(int i =0;i<s.length();i++){
       if( s[i]=='{' ){
           st.push(s[i]);
           op++;
       }
       else if(s[i]=='}' && !st.empty() && st.top()=='{'){
           st.pop();
           op--;
       }
       else{
           cl++;
       }
   }
   if(op&1) op = (op/2)+1;
   else  op = op/2;
   if(cl&1) cl =(cl/2) +1;
   else cl= cl/2;
   return cl+op;
    
}