#include<stdio.h>
int main()
{
    int num, digit_at_ones_place;
    printf("Enter any number:");
    scanf("%d",&num);
    digit_at_ones_place=num%10;
    printf("The digit at ones place of %d is %d",num,digit_at_ones_place);
    getch();
    return 0;
}
