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
		puts("Error! Enter Alphabet.");		// puts 는 문자열을 출력함,   fputs는 스트림 지정해서 출력하며 \n을 실행하지 않음.
		return -1;
	}

	putchar(c);
	return 0;
	
}
