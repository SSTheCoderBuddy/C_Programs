#include <stdio.h>
#include <math.h>
void main() 
  {
     int num, sum= 0, rem= 0, c= 0, copy;
     printf("Enter a no.: ");
     scanf("%d", &num);
     copy= num;
     while (num!= 0)
      {
         c++;
         num= num/10;
      }
     while (num!= 0)
      {
         rem= num%10;
         sum= sum + pow(rem, num);
         num= num/10;
      }
     if (sum == copy)
       printf("%d is not an Armstrong no.", copy); 
     else
       printf("%d is an Armstrong no.", copy);  
  }