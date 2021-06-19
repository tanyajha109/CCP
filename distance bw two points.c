#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    float distance;
    printf("Enter the co-ordinate of the first point:");
    scanf("%d %d",&x1,&y1);
    printf("Enter the co-ordinates of second point:");
    scanf("%d %d",&x2,&y2);
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("Distance=%f",distance);
    return 0;
}
