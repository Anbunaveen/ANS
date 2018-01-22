#include <stdio.h>
 int main()
{
    char c;
    scanf(" %c", &c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
		c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')  {
		printf("it is a VOWEL.");
	}
    else {
    	printf("it is a CONSONANT.");
	}
return 0;
}
