//Write a program to delete an element from an array.
#include <stdio.h>
void main()
  {
    int n, i, pos, a[50];
    printf("Enter n: ");
    scanf("%d",&n);
    if(n>=50)
      printf("Array index out of bound");
    else
    {
      printf("Enter elements of array a: ");
      for (i=0; i<n; i++)
        scanf("%d", &a[i]);
      printf("Values of array a:\n");
      for (i=0; i<n; i++)
        printf("%d\t", a[i]);
      printf("Enter the position of the element you will delete: ");
      scanf("%d", &pos);
      for (i=pos; i<n-1; i++)
        a[i]=a[i+1];
      n--;
      printf("Values of array a after deletion:\n");
      for (i=0; i<n; i++)
        printf("%d\t", a[i]);
    }
  } 