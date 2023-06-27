//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[],long long left,
    long long mid,long long right){
       vector<long long > temp;
       long long low = left;
       long long high = mid+1;
       long long  cnt = 0;
       while(low <= mid &&high <= right){
           if(arr[low]<=arr[high]){
               temp.push_back(arr[low]);
               low++;
           }
           else{
               temp.push_back(arr[high]);
               cnt += mid-low+1;
               high++;
           }
       }
       while(low <= mid){
           temp.push_back(arr[low]);
           low++;
       }
       while(high <= right){
           temp.push_back(arr[high]);
           high++;
       }
       for(int i = left;i<=right;i++){
        arr[i]=temp[i-left];
       }
       return cnt;
    }
    long long int merge_sort(long long arr[],long  long left,
    long long right,long long n){
       long long int cnt = 0;
        if(left>=right){
            return cnt ;
        }
        long long mid = (left+right)/2;
        cnt += merge_sort(arr,left,mid,n);
        cnt +=merge_sort(arr,mid+1,right,n);
        cnt +=merge(arr,left,mid,right);
        return cnt;
        
    }
    long long int inversionCount(long long arr[], long long N)
    {
        long long ans = merge_sort(arr,0,N-1,N);
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends