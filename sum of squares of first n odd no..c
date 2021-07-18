#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter the last number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(2*i-1)*(2*i-1);
    }
    printf("The sum of squares of first %d odd numbers is %d",n,sum);
    getch();
}
