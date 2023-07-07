//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	   vector<int> ans;
	   set<int> s;
	   for(int i =2;i*i<=N;i++){
	       while(N%i==0){
	           
	           s.insert(i);
	           N=N/i;
	       }
	   }
	   if(N>1){
	       s.insert(N);
	   }
	   for(auto st:s){
	       ans.push_back(st);
	   }
	   return ans;
	  
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends