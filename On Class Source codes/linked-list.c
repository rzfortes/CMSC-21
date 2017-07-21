#include <stdio.h>

typedef struct ListNode {
  int value;
  struct ListNode* next;
} ListNode;

// ListNode* -> void
// Prints the value of every node in the list
void printList(ListNode* head) {
  if (head == NULL) {
    printf("\n");
  } else {
    printf("%d ", head->value);
    printList(head->next);
  }
}

// ListNode* -> void
// Prints the value of every node in the list
void printReverse(ListNode* head) {
  if (head == NULL) {

  } else {
    printReverse(head->next);
    printf("%d ", head->value);
  }
}

int main() {

  ListNode a = {1, NULL};
  ListNode b = {2, NULL};
  ListNode c = {3, NULL};
  ListNode d = {4, NULL};
  ListNode e = {5, NULL};

  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = &e;

  printList(&a);
  printReverse(&a);
  return 0;
}
