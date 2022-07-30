//9. Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
int main()
{

    int n,a,b,sum=0,rem,flag=0;

    printf("Enter a number\n");
    scanf("%d",&n);
        a=n;
        while(a!=0)
        {
            rem=a%10;
            sum=sum+rem*rem*rem;
            a=a/10;
        }
        if(sum==n)
        {
           flag=1;
        }
    
    if (flag==1)
    {
       printf("%d number is an armstrong number",n);
    }
    else
    printf("not an armstrong number");
    
    return 0;
}
