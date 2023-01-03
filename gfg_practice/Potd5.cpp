

/* Tree Node
struct Node
{
	int data;
	Node* left;
	Node* right;
};*/

class Solution
{
public:
    int singlevalued(Node* root)
    {
        if (!root) return 0; 

        int count = 0;
        if (isSingleValued(root)) count++; 
        count += singlevalued(root->left); 
        count += singlevalued(root->right); 

        return count;
    }

private:
    bool isSingleValued(Node* root)
    {
        if (!root) return true; 
        if (!root->left && !root->right) return true; 
        if (root->left && root->right) {
 
            return root->left->data == root->data &&
                   root->right->data == root->data &&
                   isSingleValued(root->left) &&
                   isSingleValued(root->right);
        } else {
            
            Node* child = root->left ? root->left : root->right;
            return child->data == root->data && isSingleValued(child);
        }
    }
};