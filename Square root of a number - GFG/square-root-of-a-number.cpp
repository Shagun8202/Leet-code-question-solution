//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
      long long int l = 1;
      long long int h = x;
      long long int sq = 0;
      while(l<=h){
          long long int mid = (l+h)/2;
          if(mid*mid == x){
              return mid;
          }
          else if(mid*mid > x){
              h = mid-1;
          }
          else{
              sq = mid;
              l = mid+1;
          }
      }
      return sq;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends