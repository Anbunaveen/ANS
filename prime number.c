#include <stdio.h>
int main()
{
int n,i,p;
printf("n");
scanf("%d",&n);
for(i=0;i<=n/2;i++)
{
if(n%i==0)
{
p=0;
break; 
}
}
if(p==1)
printf("yes it is a prime number");
else
printf("not a prime number");
return 0;
}
