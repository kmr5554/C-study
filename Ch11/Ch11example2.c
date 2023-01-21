#include <stdio.h>

void Problem1(void)
{
	char word[100]; // 100자 이하의 word 입력
	int idx = 0;
	printf("영단어 입력 : "), scanf("%s",word);

	while (word[idx] != 0)	// word의 null 도달할때까지 idx 카운트 해서 길이 반환
		idx++;
	printf("영단어 길이 : %d\n\n", idx);
}

void Problem2(void)
{
	char word2[1000];
	char word3[1000];
	printf("영단어 입력 : "), scanf("%s", word2);

	int len = 0;
	while (word2[len] != 0)
		len++;
	
	int i = 0;
	while (i<=len)
	{
		word3[i] = word2[i];
		i++;
	}

	int j = 0;
	while (word2[j] != 0)
	{
		word2[j] = word3[len - j - 1];
		j++;
	}
	printf("뒤집힌 영단어 : %s\n\n", word2);
}

void Problem2_Answer(void)
{
	char word2[1000];
	int len = 0;
	char temp;

	printf("영단어 입력 : "), scanf("%s", word2);

	while (word2[len] != 0)
		len++;

	for (int i = 0; i < len / 2; i++)
	{
		temp = word2[i];
		word2[i] = word2[len - i - 1];
		word2[len - i - 1] = temp;
	}
	printf("뒤집힌 영단어 : %s\n\n", word2);
}

void Problem3(void)
{
	char word[1000];
	printf("영단어 입력 : "), scanf("%s", word);

	int len = 0;
	while (word[len] != 0)
		len++;

	char max = word[0];
	for (int i = 0; i < len; i++)
		if (word[i] > max)
			max = word[i];
		
	printf("Max Ascii : %c\n", max);
}

int main(void)
{
	Problem1();
	Problem2();
	Problem2_Answer();
	Problem3();
	return 0;
}

