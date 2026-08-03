/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

//Inorder Traversal
class Solution {
public:
     int count=0;
      int answer=0;
    void InorderTraversal(TreeNode* node ,int k)
    {
       
      if(node==nullptr || count>=k)
    return;
      
      InorderTraversal(node->left,k);
      count++;
      if (count==k)
      {
        answer=node->val;
        //return answer;
      }
      InorderTraversal(node->right,k);
    }
    
    int kthSmallest(TreeNode* root, int k) {
      count=0;
      answer=0;
      InorderTraversal(root,k);
      return answer;
     
    }
};
