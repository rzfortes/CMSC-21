#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
  int value;
  struct ListNode* next;
} ListNode;

void printNode(ListNode* head) {
  printf("%d -> ", head->value);
}

void printList(ListNode* head) {
  if (head == NULL) {
    printf("\n");
  } else {
    printNode(head);
    printList(head->next);
  }
}


ListNode* createNode(int value) {
  ListNode* new = malloc(sizeof(ListNode));
  if (new == NULL) {
    return NULL;
  }

  new->value = value;
  new->next = NULL;

  return new;
}

void destroyNode(ListNode* head) {
  head->next = NULL;
  free(head); 
}

int main() {

  ListNode a = {0, NULL};
  /* ListNode b = {2, NULL}; */
  /* ListNode c = {3, NULL}; */
   
  ListNode* head = &a;

  printList(head);

  ListNode* new = createNode(1);
  printNode(new);

  ListNode* new2= createNode(2);
  printNode(new2);
  /* for (int i = 1; i < 100; i++) { */
    // add to the end of the list
    /* append(head, new); */
  /* } */

  destroyNode(new);
  destroyNode(new2);


  return 0;
}
