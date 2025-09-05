/*
****
***
**
*
*/
#include <stdio.h>
void main() 
  {
    int row, i, j, k;
    printf("Enter no. of rows: ");
    scanf("%d", &row);
    for (i= 1; i<= row; i++)
      {
        for (j= row; j>= i; j--)
          printf("*");
        printf("\n");
      } 
  }