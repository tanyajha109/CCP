#include<stdio.h>
int main()
{
    int n,sum=0,c,value;
    printf("Total numbers to be added");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);
    for(c=1;c<=n;c++)
    {
        scanf("%d",&value);
        sum=sum+value;

    }
    printf("sum of integers=%d/n",sum);
    return 0;
}
