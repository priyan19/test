#include<stdio.h>
 
void sum()
{
   int a, b, sum;
 
   printf("\nEnter two number to find its sum: \n ");
   scanf("%d %d", &a, &b);
 
   sum = a + b;
 
   printf("Sum : %d \n", sum);
 
   return(0);
}

