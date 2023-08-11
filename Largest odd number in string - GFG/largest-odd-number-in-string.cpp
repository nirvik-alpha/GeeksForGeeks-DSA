//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string nums) {
         int k =0;
        for(int i= nums.size()-1;i>=0;i--)
        {
            if(nums[i]%2!=0)
            {
                k = i;
                return nums.substr(0,k+1);
            }
        }

       return "";

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends