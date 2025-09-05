/*
   * * *
    * *
     * 
*/
#include <stdio.h>
void main() 
  {
    int row, i, j, k;
    printf("Enter no. of rows: ");
    scanf("%d", &row);
    for (i= row; i>= 1; i--)
      {
        for (k= row-i; k>= 1; k--)
          printf(" ");
        for (j= 1; j<= i; j++)
          printf("* ");
        printf("\n");
      }
  }