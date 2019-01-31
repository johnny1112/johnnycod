#include <stdio.h>
 int main()
{
  int x, y, t;
  printf("Enter two numbers");
  scanf("%d%d", &x, &y);
  printf("Before Swapping First integer = %dSecond integer = %d", x, y);
  t = x;
  x = y;
  y = t;
 printf("After Swapping First integer = %d Second integer = %d", x, y);
 return 0;
  }
