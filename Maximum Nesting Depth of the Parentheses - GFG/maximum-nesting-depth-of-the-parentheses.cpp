//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maxDepth(string s) {
         int mx =0;
        int cnt=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            cnt++;
            else if(s[i]==')')
            cnt--;

            mx = max(mx , cnt);
        }

        return mx;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        int ans = obj.maxDepth(s);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends