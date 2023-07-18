//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    
    void recur(int K , string s)
    {
        if(K==0){
            cout<<s<<" ";
            return ;
        }
        
        if(s.back()=='0')
        {
             string b = s;
            b.push_back('0');
            
            recur(K-1,b);
            
            string a = s ;
            a.push_back('1');
            
            recur(K-1,a);
            
           
            
        }
        
        if(s.back()=='1')
        {
            string c = s;
            c.push_back('0');
            
            recur(K-1,c);
            
        }
        
        
    }


    void generateBinaryStrings(int num){
        
        string x= "0";
        
        recur(num-1,x);
        
        string y ="1";
        
        recur(num-1,y);
        
        
        
        
        
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends