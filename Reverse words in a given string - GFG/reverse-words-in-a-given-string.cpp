//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        vector<string>v;
        string ss;
        s.append(".");
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='.')
            {
                ss+=s[i];
            }
            else{
                v.push_back(ss);
                v.push_back(".");
                ss ="";
            }
        }
        string sx="";
        for(int i=v.size()-2;i>=0;i--)
        {
            sx+=v[i];
        }
        return sx;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends