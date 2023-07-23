//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        // vector<int> v;
        // int i=0,j=k-1;
        // while(j<n){
        //     priority_queue<int> pq;
        //     for(int m=i;m<=j;m++){
        //         pq.push(arr[m]);
        //     }
        //     v.push_back(pq.top());
        //     i++;
        //     j++;
            
        // }
        // return v;
        //THE ABOVE CODE GAVE TLE SO ... WRTING THE OPTIMISED CODE BELOW
        deque<int> dq;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(dq.empty()==0 and dq.front()==i-k) dq.pop_front();
            
            while(dq.empty()==0 and arr[dq.back()]<arr[i]) {dq.pop_back();}
            
            dq.push_back(i);
            
            if(i>=k-1){
                ans.push_back(arr[dq.front()]);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends