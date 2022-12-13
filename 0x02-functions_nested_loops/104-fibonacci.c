#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main() {
  int a = 1;
  int b = 2;


  printf("%d, %d", a, b);


  for (int i = 0; i < 98; i++) {
    int c = a + b;
    printf(", %d", c);
    a = b;
    b = c;
  }


  printf("\n");

  return 0;
}
