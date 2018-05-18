#include <stdio.h>

int main()
{
    int first,last,i;
    printf("ENTER THE first AND last number\n");
    scanf("%d %d",&first,&last);
    for(i=first;i<last;i++)
    {
        if(i%2==0)
       { 
           printf("%d\n",i);
       }
    }
     return 0;
}

