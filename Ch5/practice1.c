#include <stdio.h>

int main(void)
{
	char ch = 9; // 128 이하 크기
	int inum = 1052;
	double num = 3.1415;  // 실수 표현

	printf("ch 크기 : %d\n", sizeof(ch));
	printf("inum 크기 : %d\n", sizeof(inum));
	printf("num 크기 : %d\n", sizeof(num));

}