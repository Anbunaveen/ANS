#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);

    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf(" an alphabet.");
    else
        printf("not an alphabet.");
        return 0;
}
