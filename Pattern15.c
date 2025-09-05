/*
   1
  121
 12312
1234123
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
        for (l= 1; l< j; l++)
          printf("%d", l);
        printf("\n");
      }
  }