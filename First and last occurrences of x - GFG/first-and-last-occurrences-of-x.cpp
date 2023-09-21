//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int firstoccur(vector<int> v,int n,int x){
        int left=0;
        int right=n-1;
        int first=-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(v[mid]==x){
                first=mid;
                right=mid-1;
            }
            else if(v[mid]>x){
                right=mid-1;
            }
            else {
                left=mid+1;
            }
        }
        return first;
    }
    int lastoccur (vector<int> v ,int n,int x){
        int left=0;
        int right=n-1;
        int last=-1;
        while(left<=right){
            int mid=(left+right)/2;

            if(v[mid]==x){
                last=mid;
                left=mid+1;
            }   
            else if(v[mid]>x){
                right=mid-1;
            }
            else {
                left=mid+1;
            }
        }
        return last;
    }
    vector<int> find(int arr[], int n , int target )
    {
        // code here
        vector<int> nums;
        for(int i=0;i<n;i++){
            nums.push_back(arr[i]);
        }
        int f=firstoccur(nums,n,target);
        if(f==-1) return {-1,-1};
        int l=lastoccur(nums,n,target);
        return {f,l};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends