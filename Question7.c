//7. Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int i,n,a,b,flag=0;
    printf("Enter two numbers to print prime numbers between them :\n");
    scanf("%d%d",&a,&b);
    for ( n = a; n <=b; n++)
    {
        flag=0;
        for ( i = 2; i <=n/2; i++)
        {
         if (n  % i==0)
        {
             flag=1;
        }
        }
        if (flag==0)
        {
            printf("%d ",n);
        }
    }
return 0;
}
