class Solution {
  public:
    
    int maxSum = INT_MIN;  
    
    int findSubtreeSum(Node *root) {
        if (root == nullptr) return 0;  
        int leftSum = findSubtreeSum(root->left);  
        int rightSum = findSubtreeSum(root->right);  
        int subtreeSum = leftSum + rightSum + root->data;  
        maxSum = max(maxSum, subtreeSum);  
        return subtreeSum;
    }
    
    int findLargestSubtreeSum(Node *root) {
        findSubtreeSum(root);  
        return maxSum;
    }
};