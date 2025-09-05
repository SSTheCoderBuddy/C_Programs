#include <stdio.h>
void main() 
  {
    int a, b, c;
    printf("Enter 1st no.: ");
    scanf("%d", &a);
    printf("Enter 2nd no.: ");
    scanf("%d", &b);
    printf("Before Swapping: a= %d  b= %d", a, b);
    c=b;
    b=a;
    a=c;
    printf("After Swapping: a=%d b= %d", a, b);
  }