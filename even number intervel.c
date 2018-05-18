#include <stdio.h>
#include<math.h>

int main()
{
    int base,power,result;
    printf("ENTER THE BASE AND POWER\n");
    scanf("%d %d",&base,&power);
    result=pow(base,power);
    printf("result=%d",result);
     return 0;
}
