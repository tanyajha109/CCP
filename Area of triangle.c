#include<stdio.h>
#include<math.h>
int area(int a,int b,int c)
{
    float s,area;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area=%0.2f",area);
    return 0;
}
int main()
{
    int a1,b1,c1;
    printf("Enter three sides of triangle");
    scanf("%d %d %d",&a1,&b1,&c1);
    area(a1,b1,c1);
    return 0;
}
