#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char* value;
} String;

void display(String str) {
  printf("%s\n", str.value);
}

int strLen(char str[]) {
  int length = 0;
  int i;
  for (i = 0; str[i] != 0; i++) {
    length++;
  }
  return length;
}

// warning! assumes destination is big enough to fit source
void strCopy(char source[], char destination[]) {
  int i;
  for (i = 0; source[i] != '\0'; i++) {
    destination[i] = source[i];
  }
  destination[i] = '\0';
}

String createString(char newValue[]) {
  String s;

  s.value = malloc(sizeof(char) * (strLen(newValue) + 1));
  if (s.value == NULL) {
    return s;
  }

  //s.value = newValue; <- WRONG

  strCopy(newValue, s.value);
  return s;
}

void destroyString(String* str) {
  free(str->value);
  str->value = NULL;
}

// returns new length if successful, otherwise returns -1
int append(String* str, char newValue[]) {
  int previousLen = strLen(str->value);

  //printf("%s", str->value); <- to check first the value of str

  str->value = realloc(str->value, sizeof(char) * (previousLen + strLen(newValue) + 1));
  if (str->value == NULL) {
    return -1;
  }

  int i;
  int j;
  for (i = previousLen, j = 0; newValue[j] != '\0'; i++, j++) {
    str->value[i] = newValue[j];
  }
  str->value[i] = '\0';

  //printf("\n\nThe length: %d\n", strLen(str->value));
  //printf("The length Hello: %d\n", previousLen);
  //printf("The length World!: %d\n", strLen(newValue));

  if(strLen(str->value) == (previousLen+strLen(newValue))){
    return strLen(str->value);
  }
  return 0;
}


int main() {
  String str = createString("Rica");
  display(str);

  printf("\nResult: %d\n", append(&str, " Fortes!"));
  display(str); // expect print Hello World!

  destroyString(&str);

  return 0;
}
