#include <stdio.h>

void String(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s \n", argv[i]);
}

int main(void)
{
	char* str[3] = { "C programming", "C++ programming", "JAVA programming" };
	String(3, str);
	return 0;
}

/*

1.	str는 상수 문자열 3개를 성분으로 갖는 배열로, 문자열은 코드 내에서 각 문자열의 메모리 주소로 변환됨.
	따라서 str는 포인터 배열이므로 앞에 *를 붙여서 char *str[3]로 선언함.

2.  배열 이름은 각 배열 첫 원소의 주소를 가리키는 포인터 변수이기도 함.
	따라서 배열 이름인 "str"을 받을 함수 인자는 str의 첫 원소가 저장된 주소를 가리키는 또다른 포인터 변수여야 함.

3.	str의 원소가 int형 이었다면 argv는 int형 변수가 저장된 주소를 가리키는 single 포인터 변수
	예시에서 str의 원소는 문자열의 주소인 포인터이므로 argv는 포인터 변수가 저장된 주소를 가리키는 double 포인터 변수.

4. 그러므로 argv의 표현방식은 char** argv이며, 이는 char* argv[]와 동의어임.

*/

