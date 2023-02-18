#include <stdio.h>

int main(void)
{
	char str[4];
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
	//				  또한 fgets는 엔터키(\n)도 문자로 받아들이므로 문자열 내의 null(\n)과 printf내의 \n이 두번 실행되었음.
	while (getchar() != '\n');


	char str1[20];
	char str2[20];
	int j=0;

	printf("1번 입력 : ");
	fgets(str1, sizeof(str1), stdin);
	printf("2번 입력 : ");
	fgets(str2, sizeof(str2), stdin);
	while (str1[j] != '\n')
	{
		printf("%c %d\n", str1[j],j);
		j++;
	}
	int ag1, ag2;
	ag1 = atoi(&str1[2]);
	ag2 = atoi(&str2[2]);

	if (ag1 == ag2)
		printf("same");
	else
		printf("diff");
	return 0;
}
