//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long heights[], int n)
    {
        // stack<int> first;
        // vector<int> ps;
        // for(int i=0;i<n;i++){
        //     while(first.empty()==0 and arr[i]<=arr[first.top()]){
        //         first.pop();
        //     }
        //     if(first.empty()==1){
        //         ps.push_back(-1);
        //     }
        //     else{
        //         ps.push_back(first.top());
        //     }
        //     first.push(i);
        // }
        
        // stack<int> second;
        // vector<int> ns;
        // for(int i=n-1;i>=0;i--){
        //     while(second.empty()==0 and arr[i]<=arr[second.top()]){
        //         second.pop();
        //     }
        //     if(second.empty()==1){
        //         ns.push_back(-1);
        //     }
        //     else{
        //         ns.push_back(second.top());
        //     }
        //     second.push(i);
        // }
        // reverse(ns.begin(),ns.end());
        // long long maxArea=-1;
        // for(int i=0;i<n;i++){
        //     long long temp=(ns[i]-ps[i]-1)*arr[i];
        //     maxArea=max(maxArea,temp);
        // }
        // return maxArea;
        // Your code here
        
         vector<int> ps;
        stack<int> st1;
        
        //for prev smaller
        for(int i=0;i<n;i++){
            while(st1.empty()==0 and heights[i]<=heights[st1.top()]){
                st1.pop();
            }
            if(st1.empty()==1){
                ps.push_back(-1);
            }
            else{
                ps.push_back(st1.top());
            }
            st1.push(i);
        }
       
        vector<int> ns;
        stack<int> st2;
        //next smaller
        for(int i=n-1;i>=0;i--){
            while(st2.empty()==0 and heights[i]<=heights[st2.top()]){
                st2.pop();
            }
            if(st2.empty()==1){
                ns.push_back(n);
            }
            else{
                ns.push_back(st2.top());
            }
            st2.push(i);
        }
        reverse(ns.begin(),ns.end());
        long long  maxarea=-1;
        for(int i=0;i<n;i++){
            long long  x=(ns[i]-ps[i]-1)*heights[i];
            maxarea=max(maxarea,x);
        }

        return maxarea;
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