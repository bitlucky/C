

#include<stdio.h>
void sum();  // function for adding two numbers
void main()
{
  sum();
}
void sum()
{
  int a,b,sum;
  printf("Enter first number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  sum=a+b;
  printf("Sum of two numbers=%d",sum);
}
