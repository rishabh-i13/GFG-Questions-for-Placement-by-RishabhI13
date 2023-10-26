//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int lcs(string &a,string &b,int i,int j,vector<vector<int>>&dp){
    if(i==a.size())return 0;
    if(j==b.size())return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    int ans=0;
    if(a[i]==b[j])
     ans=1+lcs(a,b,i+1,j+1,dp);
    else
     ans=max(lcs(a,b,i+1,j,dp),lcs(a,b,i,j+1,dp));
     return dp[i][j]=ans;
}
    int minimumNumberOfDeletions(string S) { 
        vector<vector<int>> dp(S.size(), vector<int>(S.size(), -1));
        string S1="";
        S1+=S;reverse(S1.begin(),S1.end());
        return S.size()-lcs(S,S1,0,0,dp);
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends