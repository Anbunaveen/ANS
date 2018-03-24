#include<stdio.h>
int main()
{
int N,count=0;
printf("N=");
scanf("%d",&N);
while(N!=0)
{
N=N/10;
count++;
}
printf("number of digit for the given number is %d",count);
return 0;
}
