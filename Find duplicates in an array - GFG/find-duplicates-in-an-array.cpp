//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        int sum=0;
        vector<int>  v;
        //vector<int> g;
        set<int> s;
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]==0){
                v.push_back(arr[i]);
            }
        }
        int k=v.size();
        for(int i=0;i<k;i++){
            s.insert(v[i]);
        }
        vector<int> g(s.begin(),s.end());
        if(k!=0){
            return g;
        }
        else{
            return {-1};
        }
        
        // code here
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends