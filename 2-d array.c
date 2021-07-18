#include<stdio.h>
void main()
{
    int marks[4][3],i,j,max_marks;
    for(i=0;i<4;i++)
    {
        printf("Enter the marks obtained by student %d",i=1);
        for(j=0;j<3;j++)
        {
            printf("\nmarks[%d][%d]=",i,j);
            scanf("%d",&marks[i][j]);
        }
    }
    for(j=0;j<3;j++)
    {
        max_marks=marks[0][j];
        for(i=1;i<4;i++)
    {
    if(marks[i][j]>max_marks)
    max_marks=marks[i][j];
    }
    printf("\nThe highest marks obtained in the subject%d=%d\n",j+1,max_marks);
    }
    getch();
}



