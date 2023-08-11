//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s,string goal)
    {
         int cnt=0;
       while(s!=goal && cnt<s.length())
       {
           char c = s[0];
           s.erase(0,1);

           s.push_back(c);
           cnt++;
       }
       
       if(cnt==s.length())
       {
           return false;
       }

       return true;

       
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends