/*
1
23
456
(Floyd's Triangle)
*/
#include <stdio.h>
void main() 
  {
    int row, i, j, c= 1;
    printf("Enter no. of rows: ");
    scanf("%d", &row);
    for (i= 1; i<= row; i++)
      {
        for (j= 1; j<= i; j++)
          {
            printf("%d", c);
            c++;
          }
        printf("\n");
      }
  }