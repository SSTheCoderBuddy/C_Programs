/*
   1
  121
 12321
1234321
*/
#include <stdio.h>
void main() 
  {
    int row, i, j, k, l;
    printf("Enter no. of rows: ");
    scanf("%d", &row);
    for (i= 1; i<= row; i++)
      {
        for (k= row-i; k>= 1; k--)
          printf(" ");
        for (j= 1; j<= i; j++)
          printf("%d", j);
        for (l= j-2; l> 0; l--)
          printf("%d", l);
        printf("\n");
      }
  }