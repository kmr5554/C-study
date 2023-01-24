#include <stdio.h>

void Arraystring(void)
{
	char str[] = "Good";
	char str2[] = { "Good" };	// 둘은 결과 같음

	printf("배열 크기 : %d, %d\n", sizeof(str), sizeof(str2));

	printf("널 문자 문자형 : %c , %c \n", str[4], str2[4]);
	printf("널 문자 정수형 : %d , %d \n", str[4], str2[4]);	// null 은 아스키 코드로 0 

	char null = '\0', space = ' ';
	printf("Ascii Code for  null : %d / space : %d\n", null, space); // 공백은 아스키 코드로 32
}

void ReadString(void)
{
	char str3[50];
	int idx = 0;
	printf("문자열 : "), scanf("%s", str3);  //scanf라서 공백 만들면 끝나버리기 때문에 공백 포함 문장 호출하는 함수는 나중에 따로 설명함
	printf("입력된 문자열 : %s\n", str3);

	printf("문자 단위 출력 : ");
	while (str3[idx] != '\0')
	{
		printf("%c", str3[idx]);
		idx++
	}
}

int main(void)
{
	Arraystring();
	ReadString();
}