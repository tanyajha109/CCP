#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter values of a,b,c");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("%d is the smallest",a);
    }
    else if(b<c)
    {
        printf("%d is the smallest",b);
    }
    else
    {
        printf("%d is the smallest",c);
    }
}
