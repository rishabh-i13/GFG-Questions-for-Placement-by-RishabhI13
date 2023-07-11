//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
        int left=0;
        int top=0;
        int right=m-1;
        int bottom=n-1;
        vector<int> v;
        while(left<=right and top<=bottom){
            for(int i=left;i<=right;i++){
                v.push_back(a[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                v.push_back(a[i][right]);
            }
            right--;
            if(left<=right){
                for(int i=right;i>=left;i--){
                    v.push_back(a[bottom][i]);
                }
                bottom--;
            }
            if(top<=bottom){
                for(int i=bottom;i>=top;i--){
                    v.push_back(a[i][left]);
                }
                left++;
            }
        }
        return v[k-1];
 		// Your code goes here.
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends