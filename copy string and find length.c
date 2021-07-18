#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i=0,length;
    printf("Enter the string:");
    gets(s1);
    while(s1[i]!='\0')
    {
        s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';
    while(s2[i]!='\0')
    {
        i++;
    }
    length=i;
    printf("\nCopied string is %s",s2);
    printf("\nThe length of the string is %d",length);
}
