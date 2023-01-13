# include <stdio.h>

int main(void)
{	//1번 문제

	int x1, y1, x2, y2;
	int width;
	printf("point 1(x,y) : ");
	scanf("%d %d", &x1, &y1);

	printf("point 2(x, y) : ");
	scanf("%d %d", &x2, &y2);

	width = (x2-x1)*(y2-y1);
	printf("Rengtangular width : %d\n\n", width);
	
	//2번 문제
	double num1, num2;
	printf("input num1, num2 : ");
	scanf("%lf %lf", &num1, &num2);		//입력으로 double 받을 땐 %lf

	printf("plus, minus, product, divide : %f, %f, %f, %f\n\n", num1 + num2, num1 - num2, num1 * num2, num1 / num2);		//출력으로 double 받을땐 %f

	//4번 문제
	int ascii;
	printf("input number : ");
	scanf("%d", &ascii);
	printf("ascii alphabet : %c\n\n", ascii);

	//5번 문제
	char alphabet;
	printf("input alphabet : ");
	scanf(" %c", &alphabet);   // 이전 scanf에서 엔터친 걸 %c로 받아들이기 때문에 오류 생김 -> %앞에 한 칸 띄어쓰기 해줘야함
	printf("%d", alphabet);
	return 0;


	


}