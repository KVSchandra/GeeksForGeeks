//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findSmallestSubArr(int arr[], int n, int g) {
        bool f = false;
        for(int i = 0; i<n-1; i++) {
            if(arr[i] == g) {return 1;}
            if(__gcd(arr[i], arr[i+1]) == g) {f = true;}
        }
        if(arr[n-1] == g) return 1;
        if(f) return 2;
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, g;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> g;
        Solution ob;
        auto ans = ob.findSmallestSubArr(arr, n, g);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends