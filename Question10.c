//10. Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main()
{

    int n,a,sum,rem;
    printf("the Armstrong Numbers are :\n");
    for(n=1;n<=1000;n++)
    {
        sum=0;
        a=n;
        while(a!=0)
        {
            rem=a%10;
            sum=sum+rem*rem*rem;
            a=a/10;

        }
        if(sum==n)
        {
            printf("%d\n",n);
        }
    }
    return 0;
}
