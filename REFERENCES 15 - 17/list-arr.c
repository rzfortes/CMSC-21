#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int* values;
  int length;
  int size;
} ArrayList;

void display(ArrayList list) {
  printf("%d\n", list.length);
  int i;
  for (i = 0; i < list.length; i++) {
    printf("%d ", list.values[i]);
  }
  printf("\n");
}

ArrayList createArrayList(int size) {
  ArrayList newList = {NULL, 0, 0};

  int* newArray = malloc(sizeof(int) * size);
  if (newArray == NULL) {
    return newList;
  }

  newList.values = newArray;
  newList.size = size;
  newList.length = 0;

  return newList;
}

void destroyArrayList(ArrayList* list) {
  free(list->values);
  list->values = NULL;
  list->length = 0;
  list->size = 0;
}

int append(ArrayList* list, int newValue) {
  if (list->length == list->size && !(list->length == 0 && list->size > 0)) {

    int* biggerArr = realloc(list->values, sizeof(int) * list->size);
    if (biggerArr == NULL) {
      return -1;
    }

    list->values = biggerArr;
    list->size = list->size * 2;
  }

  list->values[list->length] = newValue;
  list->length++;
  return list->length;
}

void removeAt(ArrayList* list, int index) {
  // given
  // list = 1 2 3 4 5
  // list.length = 5
  // index = 1

  // after calling removeAt
  // list = 1 3 4 5
  // list.length = 4
}

void addAt(ArrayList* list, int newValue, int index) {
  // given
  // list = 1 2 3 4 5
  // list.length = 5
  // list.size = 5
  // newValue = 6
  // index = 1

  // after calling addAt
  // list = 1 6 2 3 4 5
  // list.length = 6
  // list.size = 10
}

int main() {
  ArrayList list = createArrayList(5);

  append(&list, 1);
  append(&list, 2);
  append(&list, 3);
  append(&list, 4);
  append(&list, 5);
  display(list);

  append(&list, 6);
  display(list);

  printf("%d\n", list.size);
  destroyArrayList(&list);

  return 0;
}
