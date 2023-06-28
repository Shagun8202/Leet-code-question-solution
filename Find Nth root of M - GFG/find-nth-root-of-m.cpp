//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int func(int n,int mid,int m){
	  long long  int ans = 1;
	    for(int i =0;i<n;i++){
	        ans = ans*mid;
	        
	        
	        if(ans>m){
	            return 2;
	        }
	    }
	    if(ans==m){
	            return 1;
	        }
	    return 0;
	}
	  int floorSrt(int n,int m) 
    {
      long long int l = 1;
      long long int h = m;
      
      while(l<=h){
          int mid = (l+h)/2;
          if(func(n,mid,m)==1){
              return mid;
          }
          else if(func(n,mid,m)==2){
              h = mid-1;
          }
          else{
              
              l = mid+1;
          }
      }
      return -1;
    }
	int NthRoot(int n, int m)
	{
	  int ans = floorSrt(n,m);
	  return ans;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends