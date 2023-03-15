//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        vector<int> res;
        res.push_back(1);
        for(int x = 2;x<=N;x++){
            int car = 0;
            for(int i = 0;i<res.size();i++){
                int val = res[i]*x+car;
                res[i]=val%10;
                car=val/10;
            }
            while(car !=0){
                res.push_back(car%10);
                car /=10;
            }
    }
    reverse(res.begin(),res.end());
    return res;
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends