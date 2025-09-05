#include <stdio.h>
void main() 
  {
    int num, i, flag= 1;
    printf("Enter a no.: ");
    scanf("%d", &num);
    if (num<= 1)
      printf("Not a prime no.");
    for (i= 2; i<= num/2; i++)
      {
        if (num%i == 0)
          {
            flag= 0;
            break;
          }
      }
    if (flag == 0)
      printf("Not a prime no.");
    else
      printf("It is a prime no.");
  }