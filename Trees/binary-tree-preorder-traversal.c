/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void helper(struct TreeNode* root, int** arr, int* size) {
    if(root == NULL) {
        return;
    }
    *arr = (int*) realloc(*arr, ((*size) + 1) * sizeof(int));
    (*arr)[*size] = root->val;
    (*size)++;
    helper(root->left, arr, size);
    helper(root->right, arr, size);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr = (int*)malloc(0 * sizeof(int));
    *returnSize = 0;
    helper(root, &arr, returnSize);
    return arr;
}
