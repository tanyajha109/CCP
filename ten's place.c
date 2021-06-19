#include<stdio.h>
int main()
{
    int num,digit_at_tens_place;
    printf("Enter any number:");
    scanf("%d",&num);
    digit_at_tens_place=(num%100)/10;
    printf("The digit at tens place of %d is %d",num,digit_at_tens_place);
    getch();
    return 0;
}
