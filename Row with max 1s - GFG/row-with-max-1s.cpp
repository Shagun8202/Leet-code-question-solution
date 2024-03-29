//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
    private:
    int binarysearch(int i,int high,vector<vector<int>> arr){
        int cnt = 0;
        int low = 0;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[i][mid]==1){
                cnt =arr[0].size()-mid+1;
                high = mid-1;
            }
            else{
                low = mid+1; 
            }
        }
        return cnt;
    }
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	   int maxi = 0;
	   int ans = -1;
	   for(int i = 0;i<n;i++){
	       int one = binarysearch(i,m-1,arr);
	       if(one>maxi){
	           maxi =one;
	           ans = i;
	       }
	   }
	
  return ans;
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends