#include <stdio.h>

int putchar(int c);			// 표준 출력 스트림으로 문자정보 전송
int fputc(int c, FILE* stream);		// 출력 스트림을 모니터 아닌 다른것으로 지정 가능, 이후는 putchar과 동일



int getchar(void);			// 표준 입력 스트림(키보드) 으로부터 문자 입력 후 반환
int fgetc(FILE* stream);	// 문자 전송 스트림을 키보드 아닌 다른 것으로 지정 가능, 이후는 getchar과 동일

int main(void)
{
	int n1, n2;
	n1 = getchar();			// n1 변수를 키보드 통해 전송받음
	n2 = fgetc(stdin);		// n2 변수를 키보드 통해 전송받음 ( stdin 의미 : 표준 스트림 사용 --> getchar과 같은 함수가 됨)

	putchar(n1);
	fputc(n2, stdout);


	// getchar, fgetc 통해 n1에 문자 입력, n2에 엔터 키 입력 --->  putchar, fputc 통해 n1, n2 출력

	
	int ch;
	while (1)
	{
		ch = getchar();
		if (ch == EOF)
			break;
		putchar(ch);
	}

	// ctrl+z 를 입력 시 getchar()가 EOF (상수 -1)반환 --> 프로그램 종료
	
	// getchar, putchar이 int형 반환인 이유 : EOF일 때 -1을 반환해야 하기 때문

	return 0;
}
