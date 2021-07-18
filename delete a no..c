#include<stdio.h>
void main()
{
    int a[10],pos,i,n;
    printf("\nEnter number of elements in array:");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the location where you wish to delete element:");
    scanf("%d,&pos");
    if(pos>=n+1)
    printf("deletion is not possible\n");
    else
    {
        for(i=pos;i<n-1;i++)
        a[i]=a[i+1];
        printf("resultant array:\n");
        for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    }
    getch();
}
