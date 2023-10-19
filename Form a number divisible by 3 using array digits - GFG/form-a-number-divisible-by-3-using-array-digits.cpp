//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isPossible(int N, int arr[]) {
        // code here
        int ct=0;
        for(int i=0;i<N;i++){
            int k=log10(arr[i])+1;
            int m=arr[i];
            for(int j=0;j<k;j++){
                ct+=m%10;
                m=m/10;
            }
        }
        
        if(ct%3==0) return 1;
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution ob;
        cout << ob.isPossible(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends