#include <stdio.h>
void main() 
  {
    int a, b;
    printf("Enter 1st no.: ");
    scanf("%d", &a);
    printf("Enter 2nd no.: ");
    scanf("%d", &b);
    printf("Before Swapping: a= %d  b= %d", a, b);
    a= a+b;
    b= a-b;
    a= a-b;
    printf("\nAfter Swapping: a= %d b= %d", a, b);
  }