#include <stdio.h>

int Hailstone (int n)
{
  if (n % 2 == 0) {
    return n /= 2;
  }
  else {
    return n = 3 * n + 1;
  }
  return n;
}

void main() {
  int n=7; while(n!=1) {
    n = Hailstone(n);
    printf("%i\n", n);
  }
}


