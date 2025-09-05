// Write a  program to find the largest number in the array and also print its position.
#include <stdio.h>
void main()
  {
    int n, i, a[50], pos=0;
    int large= a[0];
    printf("Enter n: ");
    scanf("%d",&n);
    if(n>=50)
      printf("Array index out of bound");
    else
      {
        for(i=0; i<n; i++)
          {
            printf("a[%d]= ", i);
            scanf("%d", &a[i]);
          }
        for(i=0; i<n; i++)
          {
            if(a[i] > large) 
            {
              large= a[i];
              pos=i;
            }
          }
        printf("Largest no.= %d", large) ;
        printf("Position = %d", pos);
      }
  }