


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; 

class Solution {
  public:
    vector<int> maximumValue(Node* node) {
       vector<int> ans;
       if(node==NULL)
       return ans;
       queue<Node*> q;
       q.push(node);
       int maxi=0;
       while(!q.empty())
       {
           int nodecount=q.size();
           while(nodecount>0)
           {
               Node* n=q.front();
               int num=n->data;
               maxi=max(num,maxi);
               q.pop();
               
               if(n->left!=NULL)
               q.push(n->left);
               if(n->right!=NULL)
               q.push(n->right);
               
               nodecount--;
           }
           ans.push_back(maxi);
           maxi=0;
       }
       return ans;
    }
};