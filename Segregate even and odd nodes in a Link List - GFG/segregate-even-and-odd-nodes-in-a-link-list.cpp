//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++



class Solution{
public:
    

    Node* divide(int N, Node *head){
        
        vector<int>v1,v2;
        Node* temp = head;
        
        
         while(temp!=0){
            if(temp->data%2==0){
                v1.push_back(temp->data);
            }
            else{
                v2.push_back(temp->data);
            }
            temp=temp->next;
        }
        
        temp = head;
        
        for(int i=0;i<v1.size();i++)
        {
            temp->data = v1[i];
            temp = temp->next;
        }
        
        for(int i=0;i<v2.size();i++)
        {
            temp->data = v2[i];
            temp = temp->next;
        }
        
        return head;
        
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends