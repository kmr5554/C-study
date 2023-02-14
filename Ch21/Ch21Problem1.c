#include <stdio.h>

int Convert(int ch)
{
	int diff = 'a' - 'A';
	if ('a' <= ch && ch <= 'z')
		return ch-diff;
	else if ('A' <= ch && ch <= 'Z')
		return ch+diff;
	else
		return -1;
}

int main(void)
{
	int c;
	c = getchar();
	c=Convert(c);

	if (c == -1)
	{
		puts("Error! Enter Alphabet.");
		return -1;
	}

	putchar(c);
	return 0;
	
}
