#include <stdio.h>
void main() 
  {
    int a, b, c, discri;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    discri = b*b - 4*a*c;
    if (discri== 0)
      printf("The roots are real and equal.");
    else if (discri> 0)
      printf("The roots are real and unequal.");
    else
      printf("The roots are imaginary.");
  }