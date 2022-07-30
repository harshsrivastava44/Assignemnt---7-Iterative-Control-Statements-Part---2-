//5. Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main()
{
     int a,b,i,hcf=1,min;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    min=a<b?b:a;
    for ( i = 1; i <=min; i++)
    {
        if (a%i==0 && b%i==0  )
            hcf=i;
    }
     if (hcf==1)
           printf("Numbers are co-prime");
        else
        printf("not co-prime");
    return 0;
}