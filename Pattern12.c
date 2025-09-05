/*
   1
  12
 123
1234
*/
#include <stdio.h>
void main() 
  {
    int row, i, j, k;
    printf("Enter no. of rows: ");
    scanf("%d", &row);
    for (i= 1; i<= row; i++)
      {
        for (k= row-i; k>= 1; k--)
          printf(" ");
        for (j= 1; j<= i; j++)
          printf("%d", j);
        printf("\n");
      }
  }