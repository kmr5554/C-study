#include <stdio.h>

void Palindrome(char param[], int len)
{
	int i;
	int a=1;

	for (i = 0; i < len / 2; i++)
	{
		if (param[i] != param[len - 1 - i])
		{
			a = 0;
			break;
		}
	}
	if (a == 1)
		printf("ȸ�� �Դϴ�.\n");
	if (a != 1)
		printf("ȸ���� �ƴմϴ�.\n")
}

int main(void)
{
	char string[20];
	int count=0,len;
	printf("string : "), scanf("%s", string);
	
	while (string[count] != 0)
		count++;
	len = count;

	Palindrome(string, len);
	return 0;
}
