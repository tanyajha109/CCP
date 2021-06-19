#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("Enter temprature in fahrenheit");
    scanf("%f",&fahrenheit);
    celsius=(0.56)*(fahrenheit-32);
    printf("%2f fahrenheit=%2f celsius",fahrenheit,celsius);
    return 0;
}
