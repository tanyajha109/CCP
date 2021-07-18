#include<stdio.h>
void main()
{
    int a[5],max,min,maxpos,minpos,i,temp,n;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++);
    scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    maxpos=0;
    minpos=0;
    for(i=0;i<n;i++);
    {
        if(a[i]>max)
    {
        max=a[i];
        maxpos=i;
    }
    if(a[i]<min)
    {
        min=a[i];
        minpos=i;
    }
    }
    temp=a[maxpos];
    a[maxpos]=a[minpos];
    a[minpos]=temp;
    printf("Enter interchanging array elements are:");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    getch();
}
