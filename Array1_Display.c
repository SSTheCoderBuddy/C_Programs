// Write a  program to enter n elements in an array and display them.
#include <stdio.h>
void main()
  {
    int n, i, a[50];
    printf("Enter n: ");
    scanf("%d",&n);
    if(n>=50)
      printf("Array index out of bound");
    else
    {
      for(i=0; i<n; i++)
        {
          printf("a[%d]=", i);
          scanf("%d",&a[i]);
        }
      for(i=0; i<n; i++)
        {
          printf("a[%d]=%d", i, a[i]);
        }
    }
  }