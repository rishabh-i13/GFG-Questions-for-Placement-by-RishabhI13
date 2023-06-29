//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:

    int findSumofSqrs(int n){
        int sum=0;
        while(n!=0){
            int d=n%10;
            sum+=d*d;
            n=n/10;
        }
        return sum;
    }
    
    bool check1(int n){
        unordered_set<int> seen;
        while(n!=1){
            n=findSumofSqrs(n);
            if (seen.find(n) != seen.end()) {
            return false;
            }
            seen.insert(n);
        }
        return true;
    }
    
    int nextHappy(int N){
        // code here
        int current = N + 1;
    while (true) {
        if (check1(current)) {
            return current;
        }
        current++;
    }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends