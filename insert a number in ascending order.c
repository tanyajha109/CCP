#include<stdio.h>
void main()
{
    int a[10],i,j,n,num;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    printf("Enter %d elements in ascending order:,n");
    for(i=0;i<n;i++)
    scanf("%d",&num);
    printf("Enter the number you wish to insert:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]>num)
        {
            for(j=n-1;j>=i;j--)
            a[j+1]=a[j];
            a[i]=num;
            break;
        }
    }
    printf("Resultant array");
    for(i=0;i<=n;i++)
    printf("%d\t",a[i]);
    getch();
}
