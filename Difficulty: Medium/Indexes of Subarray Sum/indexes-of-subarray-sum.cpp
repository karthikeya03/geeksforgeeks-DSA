//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> arr, int n, long long s) 
    {
        int start = 0;
        long long curr_sum = 0;

        for (int i = 0; i < n; i++) 
        {
            curr_sum += arr[i];

            // If curr_sum exceeds the sum, remove the starting elements
            while (curr_sum > s && start < i) 
            {
                curr_sum -= arr[start];
                start++;
            }

            // If curr_sum becomes equal to sum, return the indices
            if (curr_sum == s) 
            {
                return {start + 1, i + 1};
            }
        }

        // If no subarray is found, return -1
        return {-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long s;
        cin >> n >> s;
        vector<int> arr(n);
        // int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends