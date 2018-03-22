#include<stdio.h>
int main()
{
int year;
printf("year=");
scanf("%d",&year);
if(year%100==0)
{
else if(year%400==0)
printf("%d is a leap year",year);
else("%d is not a leap year",year);
}
else if(year%4==0)
{
    printf("%d is a leap year"year);
else
printf("%d is no a leap year"year);
}
return 0;
}
