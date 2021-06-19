#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character in upper case:");
    scanf("%c",&ch);
    printf("The character in lower case is : %c",ch+32);
    getch();
    return 0;
}
