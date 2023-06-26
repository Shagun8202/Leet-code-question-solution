//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int nums[], int N)
    {
        if(N==0){
            return 0;
        }
      sort(nums,nums+N);
      int curr = 1;
      int prev=nums[0];
      int ans = 1;
      
      for(int i =1;i<N;i++){
          if(nums[i] == prev+1){
            curr++;  
          }
          else if(nums[i] != prev){
              curr=1;
          }
          prev = nums[i];
          ans = max(ans,curr);
          
      }
      return ans;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends