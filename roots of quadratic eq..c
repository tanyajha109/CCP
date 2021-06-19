#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float D,deno,root1,root2;
    printf("Enter the values of a,b,and c:");
    scanf("%d %d %d",&a,&b,&c);
    D=(b*b)-(4*a*b*c);
    deno=2*a;
    if(D>0)
    {
        printf("/n Real Roots");
        root1=-b/deno;
        printf("/n Root1=%f \t Root2=%f",root1,root1);

    }
    else
        printf("/n Imaginary Roots");
        getch();
        return 0;
}


