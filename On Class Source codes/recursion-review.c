#include <stdio.h>

typedef struct TreeNode {
  char value;
  struct TreeNode* left;
  struct TreeNode* right;
} TreeNode;


// Create a function that displays the values of all nodes of a tree

// TreeNode* -> void
// Display all the values of nodes in the tree
void printTree(TreeNode* root) {
  if (root == NULL) {
    // do nothing
  } else {
    // do something for root
    printf("%c\n", root->value);
    // do something for left
    // do something for right
    printTree(root->left);
    printTree(root->right);
  }
}

typedef struct ListNode {
  int value;
  struct ListNode* next;
} ListNode;

void printList(ListNode* head) {
  if (head == NULL) {
    // do nothing
  } else {
    // do something for head
    printf("%d ->", head->value);
    // do something for next
    printList(head->next);
  }
}


int existsValue(ListNode* head, int search) {
  if (head == NULL) {
    return 0;
  } else {
    if (head->value == search) {
      return 1;
    } else {
      return existsValue(head->next, search);
    }
  }
}

int population(ListNode* head) {
  if (head == NULL) {
    return 0;
  } else {
    return 1 + population(head->next);
  }
}

int currentDigit(int seq) {
  return seq % 10;
}

int nextSeq(int seq) {
  return seq / 10;
}

// int -> int
// Returns the largest digit in a sequence of digits
int largestDigit(int seq) {
  if (0 >= seq && seq <= 9) {
    return seq;
  } else {
    int largestRest = largestDigit(nextSeq(seq));
    int current = currentDigit(seq);
    if (current > largestRest) {
      return current;
    } else {
      return largestRest;
    }
  }
}

// int, int -> int
// Produce the product of a and b
int multiply(int a, int b) {
  if (a == 0) {
    return 0;
  } else {
    return b + multiply(a - 1, b);
  }
}


int main() {
  TreeNode a = {'A', NULL, NULL};
  TreeNode b = {'B', NULL, NULL};
  TreeNode c = {'C', NULL, NULL};
  TreeNode d = {'D', NULL, NULL};

  a.left = &b;
  a.right = &c;
  b.left = &d;

  printTree(&a);

  // expect:
  // A
  // B
  // D
  // C
   
  ListNode lista = {1, NULL};
  ListNode listb = {2, NULL};
  ListNode listc = {3, NULL};

  lista.next = &listb;
  listb.next = &listc;

  printList(&lista);

  printf("%d\n", existsValue(&lista, 3));

  printf("%d\n", population(&lista));


  printf("Tests for largestDigit\n");
  printf("%d\n", largestDigit(15321));

  printf("Tests for multiply\n");
  printf("%d\n", multiply(2, 3)); // expect 6
  return 0;
}
