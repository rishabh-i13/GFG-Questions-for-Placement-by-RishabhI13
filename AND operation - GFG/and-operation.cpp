//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int  find_and(int l, int r ) 
    {
        int x=l,y=r;
        // Code here.
        int result=0;

        while(x and y){
            int msb_x=log2(x);
            int msb_y=log2(y);


            if(msb_x != msb_y) break;

            int msbval=pow(2,msb_x);
            result+=msbval;

            x=x-msbval;
            y=y-msbval;
        
        }
        return result;
    }
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int  l, r;
    	cin >> l >> r;
    	Solution ob;
    	int ans = ob.find_and(l, r);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends