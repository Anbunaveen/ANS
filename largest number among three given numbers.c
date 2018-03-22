#include<stdio.h>
int main()
{
int A,B,C;
scanf("%d%d%d",&A,&B,&C);
if((A>B)&&(A>C))
printf("THE LARGEST NUMBER IS%d",A);
else if((B>A)&&(B>C))
printf("THE LARGEST NUMBER IS%d",B);
else
printf("THE LARGEST NUMBER IS%d",C);
return 0;
}
