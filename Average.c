#include<stdio.h>
int main()
{
    int a,b,c;
    float avg(float,float,float);
    printf("Enter the three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    avg(a,b,c);
}
float avg(float a,float b,float c)
{
    float avg;
    avg=(a+b+c)/3;
    printf("avg=%f",avg);
    return 0;
}
