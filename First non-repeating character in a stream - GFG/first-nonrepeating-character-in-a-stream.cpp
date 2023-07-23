//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    unordered_map<char,int> count;
		    queue<char> q;
		    string result="";
		    for(int i=0;i<A.size();i++){
		        count[A[i]]++;
		        
		        q.push(A[i]);
		        
		        while(q.empty()==0){
		            if(count[q.front()]>1) q.pop();
		            else {
		                result.push_back(q.front());
		                break;
		            }
		        }
		        if(q.empty()==1) result.push_back('#');
		    }
		    return result;
		    
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends