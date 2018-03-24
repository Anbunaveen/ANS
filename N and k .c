#include<stdio.h>
int main()
{
int N,i,k,sum=0;
printf("N and k ");
scanf("%d%d",&N,&k);
for(i=1;i<=N;i++)
{
printf("%d\t",i);
}
for(i=1;i<=k;i++)
{
    sum=sum+i;
}
printf("sumof first k digits%d",sum);
return 0;
}


