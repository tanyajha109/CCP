#include<stdio.h>
void main()
{
    int a[7][7]={0};
    int r=2,c,i,j;
    a[0][0]=a[1][0]=a[1][1]=1;
    while(r<7)
    {
        a[r][0]=1;
        for(c=1;c<=r;c++)
        a[r][c]=a[r-1][c-1]+a[r-1][c];
        r++;
    }
    for(i=0;i<7;i++)
    {
        printf("\n");
        for(j=0;j<=i;j++)
        printf("\t%d",a[i][j]);
    }
    getch();
}
