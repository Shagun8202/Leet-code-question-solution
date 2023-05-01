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
         long long mid = l+(h-l)/2;
         if(x==1){
             return 1;
         }
         else if(x==0){
             return 0;
         }
        long long int ans = -1;
         while(l<=h){
             long long square = mid*mid;
             if(square == x){
                 return mid;
             }
             if(square>x){
                 h = mid-1;
             }
             else{
                 ans = mid;
                 l = mid+1;
             }
             mid = l+(h-l)/2;
         }
         return ans;
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