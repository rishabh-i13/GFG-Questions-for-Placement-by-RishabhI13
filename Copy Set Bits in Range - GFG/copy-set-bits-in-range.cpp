//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        // function for decimal to binary string
        string Xbin = bitset<32>(x).to_string();
        string Ybin = bitset<32>(y).to_string();

        for(int i=31-r+1;i<=31-l+1;i++){
            if(Ybin[i]=='1'){
                Xbin[i]='1';
            }
        }
        
        // function for binary string to decimal
        bitset<32> bits(Xbin);
        int number = bits.to_ulong();
        return number;
    
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, l, r;
        cin>>x>>y>>l>>r;
        
        Solution ob;
        cout<<ob.setSetBit(x, y, l, r)<<"\n";
    }
    return 0;
}
// } Driver Code Ends