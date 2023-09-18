//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        int k=log2(n);
        int m= k+1;
        int l=1;
        int ct=0;
        for(int i=1;i<=m;i++){
            int j=n&l;
            ct++;
            if(j==0){
                l=l<<1;
            }
            else{
                break;
            }
        }
        return ct;
        // Your code here
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); // function to get answer
    }
	return 0;
}

// } Driver Code Ends