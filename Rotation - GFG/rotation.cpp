//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int nums[], int n) {
	    
        int low =0;
        int high = n-1;
        int ans = INT_MAX;
        int index = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[low]<=nums[high]){
                 if(nums[low]<ans){
                    index = low;
                }
                ans = min(ans,nums[low]);
                break;
            }
            if(nums[low]<=nums[mid]){
                 if(nums[low]<ans){
                    index = low;
                }
                ans = min(ans,nums[low]);
                low = mid+1;
            }
            else{
                 if(nums[mid]<ans){
                    index = mid;
                }
                ans = min(ans,nums[mid]);
                high = mid-1;
            }
        }
        return index;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends