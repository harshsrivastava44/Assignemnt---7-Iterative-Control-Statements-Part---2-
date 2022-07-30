//1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    
    int i,n,a=-1,b=1,c;
    printf("Enter the term: \n");
    scanf("%d",&n);
  for ( i = 1; i <=n; i++)
  {
    c=a+b;
   
    a=b;
    b=c;

  }
 printf(" the %dth term of fibonnaci series is %d",n,c);

  printf("\n");
  return 0;
}
