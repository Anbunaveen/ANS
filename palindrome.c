#include <stdio.h>
int main()
{
int n,r,rev=0;
printf("n ");
scanf("%d",&n);
int m=n;
while(n!=0)
{
r=n%10;
rev=rev*10+r;
n=n/10;

}
if(rev==m)
printf( "yes");
else
printf("not");
return 0;
}
