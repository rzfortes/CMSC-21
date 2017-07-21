#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
  int value;
  struct TreeNode* left;
  struct TreeNode* right;
} TreeNode;

void printNode(TreeNode* root) {
  printf("%d -> ", root->value);
}

void printList(TreeNode* root) {
  if (root == NULL) {
    printf("\n");
  } else {
    printNode(root);
    printList(root->left);
    printList(root->right);
  }
}


TreeNode* createNode(int value) {
  TreeNode* new = malloc(sizeof(TreeNode));
  if (new == NULL) {
    return NULL;
  }

  new->value = value;
  new->left = NULL;
  new->right = NULL;

  return new;
}

void destroyNode(TreeNode* root) {
  root->left = NULL;
  root->right = NULL;
  free(root);
}

int main() {

  TreeNode a = {0, NULL, NULL};
  /* ListNode b = {2, NULL}; */
  /* ListNode c = {3, NULL}; */

  TreeNode* root = &a;

  printList(root);

  TreeNode* new = createNode(1);
  printNode(new);

  TreeNode* new2= createNode(2);
  printNode(new2);
  /* for (int i = 1; i < 100; i++) { */
    // add to the end of the list
    /* append(head, new); */
  /* } */

  destroyNode(new);
  destroyNode(new2);


  return 0;
}
