#include <stdio.h>

/*1. Write a recursive function that computes the nth Fibonacci number fib(n):
a) 0, if n == 1
b) 1, if n == 2
c) fib(n-2) + fib(n-1)
*/

// int -> int
// computes for the nth Fibonacci number

/* stub
int fib(int n) {
  return 0;
}
*/

/* template
int fib(int n) {
  if (base case) {
    // do something
  } else {
    recursive call
  }
}
*/



int fib(int n) {
  if (n == 1) {
    return 0;
  } else if (n == 2) {
    return 1;
  } else {
    return fib(n-2) + fib(n-1);
  }
}

/*2. Write a recursive function that computes x / y, where x and y are both natural numbers.
A natural is one of the following:
a) 0
b) n + 1 (where n is a natural)
*/

// int, int -> int
// computes x / y

/* stub
int division(int x, int y) {
  return 0;
}
*/

/* template
int division(int x, int y) {
  if (base case) {
    return 0;
  } else {
    recursive call
  }
}
*/

int division(int x, int y) {
  if (y == 0) {
    return -1;
  } else if (x < y) {
    return 0;
  } else {
    return division(x - y, y) + 1;
  }
}

/*3. This series of numbers is called A: 2, 5, 8, 11, 14, 17, 20 ...
Write a recursive function that computes the nth number in the series A. (You'll need a
recursive definition of the series.)
A(1) = 2
A(5) = 14
*/

// int -> int
// computes for the nth number of the series: 2, 5, 8, 11 ...

/* stub
int series(int n) {
  return 0;
}
*/

/* template
int series(int n) {
  if (base case) {
    return 2;
  } else {
    recursive call
  }
}
*/

int series(int n) {
  if (n == 1) {
    return 2;
  } else {
    return series(n - 1) + 3;
  }
}

/*4. Write a recursive function that computes for the sum of the digits of an integer.*/

// int -> int
// computes for the sum of the digits of an integer

/* stub
int sumOfDigits(int num) {
  return 0;
}
*/

/* template
int sumOfDigits(int num) {
  if (base case) {
    return num;
  } else {
    recursive call
  }
}
*/

int sumOfDigits(int num) {
  if (num / 10 == 0) {
    return num;
  } else {
    return sumOfDigits(num / 10) + (num % 10);
  }
}

/*5. Write a recursive function that returns true if a given integer is a palindrome.*/

// int -> int
// returns the first digit of the given integer

// stub
/*
int firstDigit(int n) {
  return 0;
}
*/

// template
/*int firstDigit(int n) {
  return ... n 10;
}
*/

int firstDigit(int n) {
  if (n < 10) {
    return n;
  }
  return firstDigit(n / 10);
}

// int -> int
// determines the place value of the first digit

// stub
/*int counter(int n) {
  return 0;
}
*/

// template
/*int counter(int n) {
  return ... n 10;
}
*/

int counter(int n) {
  if (n < 10) {
    return n;
  } else {
    return (counter(n / 10)) * 10;
  }
}

// int -> int
// returns the last digit of the given number

// stub
/*int lastDigit(int n) {
  return 0;
}
*/

// template
/*int lastDigit(int n) {
  return ... n 10;
}
*/

int lastDigit(int n) {
  return n % 10;
}

// int -> int
// returns the remaining digits of the given number; given that first and last digit was already removed

int remainingDigits(int n) {
  n = (n - (firstDigit(n) *counter(n))) / 10;
  return n;
}

// int -> boolean
// returns true if the given integer is a palindrome

/* stub
int isPalindrome(int num) {
  return 0;
}
*/

/* template
int isPalindrome(int num) {
  if (base case) {
    if () {
    // condition
    }
  } else {
    recursive call
  }
}
*/

int isPalindrome(int num) {
  if (num < 10) {
    return 1;
  } else {
    int first = firstDigit(num);
    int last = lastDigit(num);
    // printf("%d\n",  )
    if (first == last) {
      num = remainingDigits(num);
      isPalindrome(num);
    } else {
      return 0;
    }
  }
}

int main() {

  printf("%d\n", fib(1));
  printf("%d\n", fib(2));
  printf("%d\n", fib(3));
  printf("%d\n", fib(4));
  printf("%d\n", fib(5));
  printf("%d\n\n", fib(10));

  printf("%d\n", division(12, 6));
  printf("%d\n", division(3, 5));
  printf("%d\n", division(3, 0));
  printf("%d\n", division(100, 50));
  printf("%d\n", division(13, 7));
  printf("%d\n", division(0, 3));
  printf("%d\n\n", division(3, 3));

  printf("%d\n", series(1));
  printf("%d\n", series(2));
  printf("%d\n", series(3));
  printf("%d\n", series(4));
  printf("%d\n\n", series(5));

  printf("%d\n", sumOfDigits(1024));
  printf("%d\n", sumOfDigits(1234));
  printf("%d\n", sumOfDigits(000000001));
  printf("%d\n\n", sumOfDigits(1000));

  printf("%d\n", isPalindrome(141));
  printf("%d\n", isPalindrome(1));
  printf("%d\n", isPalindrome(11));
  printf("%d\n", isPalindrome(22));
  printf("%d\n", isPalindrome(123));
  printf("%d\n", isPalindrome(1335331));
  printf("%d\n", isPalindrome(200));

  return 0;
}
