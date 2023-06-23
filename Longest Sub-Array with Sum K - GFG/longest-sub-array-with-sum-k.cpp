//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int ans=0;
        int sum=0;
        unordered_map<int,int> preSum;
        preSum.insert({0,-1});
        for(int i=0;i<N;i++) {
            sum+=A[i];
            if(preSum.find(sum-K)!=preSum.end())
                ans=max(i-preSum[sum-K],ans);
            if(preSum.find(sum)==preSum.end())
                preSum.insert({sum,i});
        }
        return ans;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends