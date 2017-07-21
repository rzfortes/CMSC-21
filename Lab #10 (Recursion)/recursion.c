#include <stdio.h>

// 1. Create a function that visits every node in a tree, printing the name of every node

// TreeNode -> void
// prints every name in each node

typedef struct TreeNode {
  char name;
  struct TreeNode* left;
  struct TreeNode* right;
} TreeNode;

// stub
/*void printedName(TreeNode* root){

}
*/

// template
/*void printedName(TreeNode* root){
  if (base case) {

  } else {
    recursive call left
    recursive call right
  }
}
*/

void printedName(TreeNode* root) {
  if (root == NULL) {
    // do nothing
  } else {
    printf("%c\n", (root->name));
    printedName(root->left);
    printedName(root->right);
  }
}

// 2. Create a function that accepts the root of a tree and a name (a character), and
// determines if the name exists in the tree.

// TreeNode, char -> boolean
// determines whether the char (name) exists in the tree

// stub
/*int nameExists(TreeNode* root, char name){
  return 0;
}
*/

// template
/*int nameExists(TreeNode* root, char name){
  if (base case) {
    return 0;
  } else {
    recursive call left
    recursive call right
  }
}
*/

int nameExists(TreeNode* root, char letter){
  if (root == NULL) {
    return 0;
  } else {
    return root->name == letter || nameExists(root->left, letter) || nameExists(root->right, letter);
  }
}

typedef struct ListNode {
  char c;
  struct ListNode* next;
} ListNode;

// 1. Create a function that visits every node in a linked list, printing the name of every node

// ListNode -> void
// visits every node on a linked list, then prints the name of every node

// stub
/*void linkedListNames(ListNode* head) {
  return 0;
}
*/

// template
/*void linkedListNames(ListNode* head) {
  if (base case) {
    ....
  } else {
    recursive call
  }
}
*/

void linkedListNames(ListNode* head) {
  if (head == NULL) {
    printf("\n");
  } else {
    printf("%c\n", head->c);
    linkedListNames(head->next);
  }
}

// 2. Create a function that returns the “max” name in a linked list. The “max” name is the
// name with the highest ASCII value.

// ListNode, char -> char
// returns the MAX name in a linked list given that MAX is the HIGHEST ASCII VALUE

char maxName(ListNode* head) {
  if (head == NULL) {
    return 0;
  } else {
    char MAXIMUM = maxName(head->next);
    if (MAXIMUM < (head->c)) {
      return head->c;
    } else {
      return MAXIMUM;
    }
  }
}

// 3. Create a function that finds the average of integer values in a linked-list. You’ll need
// another type of ListNode, containing an integer instead of a character. (Hint: there are
// three steps in finding the average value.)

typedef struct AnotherLinkedList {
  int value;
  struct AnotherLinkedList* next;
} AnotherLinkedList;

// AnotherListNode -> float

// stub
/*int population(AnotherListNode* head) {
  return 0;
}
*/

// template
/*int population(AnotherListNode* head) {
  if (base case) {
    ....
  } else {
    recursive call
  }
}
*/

int population(AnotherLinkedList* head) {
  if (head == NULL) {
    return 0;
  } else {
    int popNext = population(head->next);
    return 1 + popNext;
  }
}

int sumOfValues(AnotherLinkedList* head) {
  if (head == NULL) {
    return 0;
  } else {
    return head->value + sumOfValues(head->next);
  }
}

float average(AnotherLinkedList* head) {
  if (head == NULL) {
    return 0;
  } else {
    return sumOfValues(head) / population(head);
  }
}


int main(){

  TreeNode justin = {'J', NULL, NULL};
  TreeNode katrina = {'K', NULL, NULL};
  TreeNode frank = {'F', NULL, NULL};
  TreeNode dianne = {'D', NULL, NULL};
  TreeNode rain = {'R', NULL, NULL};

  justin.left = &katrina;
  justin.right = &frank;

  katrina.left = &rain;

  frank.right = &dianne;

  printedName(&justin);

  printf("\n%d", nameExists(&justin, 'D'));
  printf("\n%d\n\n", nameExists(&justin, 'S'));

  ListNode jasper = {'j', NULL};
  ListNode ina = {'i', NULL};
  ListNode elena = {'x', NULL};
  ListNode bobby = {'z', NULL};

  jasper.next = &ina;
  ina.next = &elena;
  elena.next = &bobby;

  linkedListNames(&jasper);

  printf("%c\n\n", maxName(&jasper));

  AnotherLinkedList anna = {1, NULL};
  AnotherLinkedList joseph = {2, NULL};
  AnotherLinkedList cristine = {3, NULL};
  AnotherLinkedList aubrey = {4, NULL};
  AnotherLinkedList leila = {5, NULL};

  anna.next = &joseph;
  joseph.next = &cristine;
  cristine.next = &aubrey;
  aubrey.next = &leila;

  printf("%d\n", population(&anna));
  printf("%d\n", sumOfValues(&anna));
  printf("%f\n", average(&anna));

  return 0;
}
