#include<stdio.h>
void main()
{
    int i,j,r,c,a[10][10],b[10][10];
    printf("Enter the number of rows and columns of a matrix:");
    scanf("%d%d",&r,&c);
    printf("Enter the elements of matrix\n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    b[j][i]=a[i][j];
    printf("\nThe transpose of the matrix:");
    for(i=0;i<c;i++);
    {
        printf("\n");
        for(j=0;j<r;j++)
        printf("%d\t",b[i][j]);
    }
    getch();

}
