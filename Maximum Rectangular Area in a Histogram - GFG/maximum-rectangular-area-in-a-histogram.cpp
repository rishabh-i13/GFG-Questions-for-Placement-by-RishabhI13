//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        stack<int> first;
        vector<int> ps;
        for(int i=0;i<n;i++){
            while(first.empty()==0 and arr[i]<=arr[first.top()]){
                first.pop();
            }
            if(first.empty()==1){
                ps.push_back(-1);
            }
            else{
                ps.push_back(first.top());
            }
            first.push(i);
        }
        
        stack<int> second;
        vector<int> ns;
        for(int i=n-1;i>=0;i--){
            while(second.empty()==0 and arr[i]<=arr[second.top()]){
                second.pop();
            }
            if(second.empty()==1){
                ns.push_back(n);
            }
            else{
                ns.push_back(second.top());
            }
            second.push(i);
        }
        reverse(ns.begin(),ns.end());
        long long maxArea=-1;
        for(int i=0;i<n;i++){
            long long temp=(ns[i]-ps[i]-1)*arr[i];
            maxArea=max(maxArea,temp);
        }
        return maxArea;
        // Your code here
      
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends