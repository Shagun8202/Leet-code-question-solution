//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int k)
    {
        sort(candies,candies+N);
        int mini = 0;
        int buy = 0;
        int fre = N-1;
        while(buy<=fre){
            mini = mini + candies[buy];
            buy++;
            fre = fre-k;
        }
        int maxi = 0;
        int buy2 = N-1;
        int fr = 0;
        while(fr<=buy2){
            maxi = maxi+candies[buy2];
            buy2--;
            fr = fr+k;
        }
        vector<int> ans;
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends