/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void helper(struct TreeNode* root, int* count) {
    if(root == NULL) {
        return;
    }
    helper(root->left, count);
    (*count)++;
    helper(root->right, count);
}

int countNodes(struct TreeNode* root) {
    int count = 0;
    helper(root, &count);
    return count;
}
