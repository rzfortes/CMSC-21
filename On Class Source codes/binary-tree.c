#include <stdio.h>

typedef struct TreeNode {
  char name;
  struct TreeNode* left;
  struct TreeNode* right;
} TreeNode;

int population(TreeNode* root) {
  if (root == NULL) {
    return 0;
  } else {
    int popLeft = population(root->left);
    int popRight = population(root->right);
    return popLeft + popRight + 1;
  }
}

int maxDepth(TreeNode* root) {
  if (root == NULL) {
    return 0;
  } else {
    int depthLeft = maxDepth(root->left);
    int depthRight = maxDepth(root->right);
    // return maxOf2(depthLeft, depthRight);
    if (depthLeft > depthRight) {
      return depthLeft + 1;
    } else {
      return depthRight + 1;
    }
  }
}

int main() {
  TreeNode* base = NULL;

  TreeNode justin = {'J', NULL, NULL};
  TreeNode frank = {'F', NULL, NULL};
  TreeNode silas = {'S', NULL, NULL};
  TreeNode rica = {'R', NULL, NULL};
  TreeNode dianne = {'D', NULL, NULL};

  justin.left = &frank;
  justin.right = &silas;
  silas.left = &dianne;
  silas.right = &rica;

  printf("%d\n", population(&justin));
  printf("%d\n", maxDepth(&justin));


  return 0;
}
