//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            
           int dot=0;
            string sx="";
            for(int i=0;i<s.length();i++)
            {
                if(s[i]!='.')
                {
                    sx+=s[i];
                }
                if(s[i]=='.')
                dot++;
                if(s[i]=='.' || i == s.length()-1)
                {
                    if(sx.length()>1 && sx[0]=='0')return 0;
                    if(sx.length()==0 || sx.length()>3) return 0;
                    if(sx.length()==1)
                    {
                        if(int(sx[0])<'0' || int(sx[0])>'9') return 0;
                    }
                    if(sx.length()==2)
                    {
                        if(int(sx[1])<'0' || int(sx[1])>'9') return 0;
                    }
                    if(sx.length()==3)
                    {
                        if(int(sx[2])<'0' || int(sx[2])>'9') return 0;
                    }
                    int num = stoi(sx);
                    if(num<0 || num>255)
                    return 0;
                    
                    sx="";
                }
            }
            if(dot!=3)
            return 0;
            
            return 1;
            
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends