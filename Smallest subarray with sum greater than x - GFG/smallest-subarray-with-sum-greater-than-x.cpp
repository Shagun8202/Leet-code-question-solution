//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int mini = INT_MAX;
        int sum = 0;
        int j =0;
   for(int i =0;i<n;i++){
       sum +=arr[i];
       
       if(sum>x){
           mini = min(i-j+1,mini);
         while(sum>x){
             sum -= arr[j];
             
             j++;
             if(sum>x){
                 mini = min(i-j+1,mini);
             }
         }  
        
       }
   }
   return mini;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends