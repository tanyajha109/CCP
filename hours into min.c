#include<stdio.h>
int convert_time_in_mins(int hrs,int minutes);
int main()
{
    int hrs, minutes, total_mins;
    printf("Enter hours and minutes:");
    scanf("%d %d",&hrs,&minutes);
    total_mins=convert_time_in_mins(hrs,minutes);
    printf("Total minutes=%d", total_mins);
    getch();
    return 0;
}
int convert_time_in_mins(int hrs,int mins)
{
    mins=hrs+60+mins;
    return mins;
}
