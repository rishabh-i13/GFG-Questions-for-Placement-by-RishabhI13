//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long height[], int len)
{
    // Your code goes here
    int left=0;
        int right=len-1;
        int maxArea=0;
        while(left<right){
            int l=height[left];
            int r=height[right];
            int minheight=min(l,r);
            int currArea=minheight*(right-left);
            maxArea=max(maxArea,currArea);
            if(l<r) left++;
            else right--;
        }
        return maxArea;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends