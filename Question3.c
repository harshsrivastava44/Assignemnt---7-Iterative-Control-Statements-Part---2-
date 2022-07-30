//3. Write a program to check whether a given number is there in the Fibonacci series or not.
#include<stdio.h>
int main()
{
 int i,n,a=-1,b=1,c;
    printf("Enter a number: \n");
    scanf("%d",&n);
  for ( i = 1; 1; i++)
  {
    c=a+b;
    
    a=b;
    b=c; 
    if (c==n)
    {
     printf("Given number is in series\n ");
     break;
    }
    if (c>n)
    {
     printf("Number not Found");
     break;
    } 
  }
  printf("\n");
  return 0;
}
