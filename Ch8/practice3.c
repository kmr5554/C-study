#include <stdio.h>

int main(void)
{
	int num;
	printf("num (2 or 3) : "), scanf("%d", &num);

	switch (num)	// num : switch에 저장된 인자, num의 값에 따라 case 결정
	{
	case 2:
		printf("A\n");
		break;	// num==2 이면 case 2 실행 후 break하여 다른 case 실행 방지
	case 3:
		printf("B\n");
		break;
	default :	// 정의된 case 영역 제외한 값이 num에 전달되는 경우 실행
		printf("Error\n");
		break;
	}

	char sel;
	printf("M / m / E / e ? :  "), scanf(" %c", &sel);
	switch (sel)
	{
	case 'M': case 'm': 		// 중간에 break가 없으면 case 여러 개를 묶을 수 있음
		printf("Morning\n");
		break;
	case 'E': case 'e':
		printf("Evening\n");
		break;
	default:
		printf("Error!\n");
	}
	
	int num1;
	printf("num : "), scanf("%d", &num);
	
	if (num == 1)
		goto ONE;	// goto ~ : 정의된 특정 레이블로 실행 위치 이동시킴, 잘 사용 X
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

ONE:
	printf("1\n");
	goto END;
TWO:
	printf("2\n");
	goto END;
OTHER:
	printf("Error\n");
END:
	return 0;


		

}