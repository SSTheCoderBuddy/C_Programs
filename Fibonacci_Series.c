#include <stdio.h>
void main() 
  {
    int n, num1= 0, num2= 1, comb, i;
    printf("Enter a no.: ");
    scanf("%d", &n);
    printf("The Fibonacci series till %d is: ", n);
    for (i=3; i<=n; i++)
      {
        comb= num1 + num2;
        num1= num2;
        num2= comb;
        printf("%d\t", comb);
      }
  }