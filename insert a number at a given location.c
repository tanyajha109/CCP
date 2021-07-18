#include<stdio.h>
void main()
{
    int a[10],pos,i,n,val;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the location at which to insert an element:");
    scanf("%d",&pos);
    printf("Enter the values to insert:");
    scanf("%d",&val);
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=val;
    printf("Resutant array:");
    for(i=0;i<=n;i++)
    printf("%d\t",a[i]);
    getch();



}
