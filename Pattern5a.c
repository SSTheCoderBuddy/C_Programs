/*
1
01
101
0101
*/
#include <stdio.h>
void main() 
  {
    int row, i, j;
    printf("Enter no. of rows: ");
    scanf("%d", &row);
    for (i= 1; i<= row; i++)
      {
        for (j= 1; j<= i; j++)
          { 
            if (i%2 == 0)
              {
                if (j%2 == 0)
                  printf("1");
                else
                  printf("0");
              }   
            else
              {
                if (j%2 == 0)
                  printf("0");
                else
                  printf("1"); 
              }
          }
        printf("\n");
      }
  }