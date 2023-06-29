//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    void working(int index,int sum,int N, vector<int> &arr,vector<int> &ansset){
        if(index==N){
            ansset.push_back(sum);
            return;
        }
        
        //Here there are two possiblity i.e. either pick an element ot not pick an element\
        
        //picking the element
        working(index+1,sum+arr[index],N,arr,ansset);
        //Not picking the element
        working(index+1,sum,N,arr,ansset);
        
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ansset;
        working(0,0,N,arr,ansset);
        
        sort(ansset.begin(),ansset.end());
        return ansset;
        
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends