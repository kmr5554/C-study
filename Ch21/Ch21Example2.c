#include <stdio.h>

int main(void)
{
	char str[6];
	int i;

	//	fgets(str, sizeof(str), stdin)
	//	str 길이만큼 str을 stdin 스트림으로부터 받음

	printf("길이 8 이상 문자입력\n");

	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);		// str 길이보다 더 큰 문자열을 받으면 str 길이만큼만 읽고 나머지는 다음에 읽음 
		printf("Read %d : %s \n", i + 1, str);
	}

	// example 결과 : 사용자는 한번 입력했으나 fgets는 남아있는 문자들을 읽으며 여러 번 반복됨.

	return 0;
}
