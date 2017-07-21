#include <stdio.h>

// int, int -> int
// Returns the largest of two parameters
int maxOf2(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

// int, int, int -> int
// Returns the largest value of the three parameters
int maxOf3(int a, int b, int c) {
  return maxOf2(maxOf2(a, b), c);
}

typedef struct TreeNode {
  int value;
  struct TreeNode* left;
  struct TreeNode* right;
} TreeNode;

// TreeNode* -> int
// Returns the number of nodes in this tree
int population(TreeNode* root) {
  if (root == NULL) {
    return 0;
  } else {
    return 1 + population(root->left) + population(root->right);
  }
}

// TreeNode* -> boolean
// Returns true if there is a node in the tree
// with a negative value
int hasNegative(TreeNode* root) {
  if (root == NULL) {
    return 0;    
  } else {
    return root->value < 0 || hasNegative(root->left) || hasNegative(root->right);
  }
}

// TreeNode* -> int
// Returns the largest value in the tree.
// If the tree is empty, return 0
int maxValue(TreeNode* root) {
  if (root == NULL) {
    return 0;
  } else {
    return maxOf3(root->value, maxValue(root->left), maxValue(root->right));
  }
}


int main() {
  TreeNode a = {1, NULL, NULL};
  TreeNode b = {2, NULL, NULL};
  TreeNode c = {-1, NULL, NULL};
  TreeNode d = {6, NULL, NULL};
  TreeNode e = {8, NULL, NULL};
  TreeNode f = {-5, NULL, NULL};


  a.left = &b;
  a.right = &c;

  b.left = &d;
  b.right = &e;

  e.left = &f;

  printf("%d\n", population(&a)); // expect 6
  printf("%d\n", hasNegative(&a)); // expect 1
  printf("%d\n", maxValue(&a)); // expect 8


  return 0;
}
