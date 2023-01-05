#include <stdio.h>
int main(void)
{										/* int 변수명 = scanf()로 scanf값을 따로 할당하지 않으면 보안상의 문제로 오류가 발생하므로
										    프로젝트 속성 -> C/C++ -> 일반 -> SDL 검사 '아니오' 설정 필요 */
	int num1, num2, result;

	printf("num1= ");
	scanf("%d", &num1);				// scanf : num1이라는 변수명에 들어갈 숫자를 사용자가 입력하게 만듦
	printf("num2= ");
	scanf("%d", &num2);

	result = num1 + num2;
	printf("result = %d \n", result);


	int a, b, c;
	printf("정수 3개 입력 : ");
	scanf("%d %d %d", &a, &b, &c);    // %d 사이에 콤마 넣으면 b, c에는 입력이 안들어감 이유는 아직 모름
	printf("%d = %d + %d + %d\n", a+b+c,a,b,c);
	return 0;
}