#include <stdio.h>

int main(int argc, char* argv[])	// argv[]는 *argv와 같으므로 인자는 char** argv와 동일하며, 이는 argv가 char형 더블 포인터 변수임을 의미 (다음 파일에서 자세히)
{
	int i = 0;
	printf("전달 문자열 수 : %d\n", argc);

	for (i = 0; i < argc; i++)
		printf("%d 번째 문자열 : %s\n", i + 1, argv[i]);
}

// cmd창에서 경로 들어간 뒤   >Ch19 I like you 
// 실행 시 코드에서 Ch19, I, like, you를 각 원소로 갖는 임의의 char type 포인터 배열[4]을 생성하고 argc를 4로 자동지정함.