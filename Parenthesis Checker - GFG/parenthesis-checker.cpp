//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        if(x.size()==1) return false;
        stack<char> stk;
        for(int i=0;i<x.size();i++){
            if(stk.size()==0){
                stk.push(x[i]);
            }
            else if(x[i]=='(' || x[i]=='{' or x[i]=='['){
                stk.push(x[i]);
            }
            else if(x[i]==')' and stk.top()=='('){
                stk.pop();
            }
            else if(x[i]=='}' and stk.top()=='{'){
                    stk.pop();
                }
            else if(x[i]==']' and stk.top()=='['){
                    stk.pop();
                }
            else{
                    stk.push(x[i]);
            }
            
        }
                  
        if(stk.size()==0) return true;
        else return false;
        
        // Your code here
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends