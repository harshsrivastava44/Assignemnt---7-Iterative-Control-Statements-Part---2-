//4. Write a program to calculate HCF of two numbers
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
        {
            hcf=i;

        }
        
    }
    printf("The hcf of two numbers is %d",hcf);
    return 0;

}