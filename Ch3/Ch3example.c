#include <stdio.h>
int main(void)
{
	// Example 3-1
	int a, b;
	
	printf("���� a �Է� : ");
	scanf("%d", &a);

	printf("���� b �Է� : ");
	scanf("%d", &b);

	printf("a + b = %d, a - b = %d\n\n", a + b, a - b);


	// Example 3-2
	int num1, num2, num3, result2;
	
	printf("���� 3�� �Է� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	result2 = num1 * num2 + num3;
	
	printf("%d x %d + %d = %d\n\n", num1, num2, num3, result2);

	//Example 3-3
	int c, result3;

	printf("���� c �Է� : ");
	scanf("%d", &c);

	result3 = c * c;

	printf("c * c = %d\n\n", result3);

	//Example 3-4
	int d, e;

	printf("���� d,e �Է� : ");
	scanf("%d %d", &d, &e);

	printf("%d ������ %d \n�� : %d \n������ : %d\n\n", d, e, d / e, d % e);

	//Example 3-5
	int num4, num5, num6, result5;
	
	printf("���� 3�� �Է� : ");
	scanf("%d %d %d", &num4, &num5, &num6);

	result5 = (num4 - num5) * (num5 + num6) * (num6 % num4);
	printf("( %d - %d ) x ( %d + %d ) x ( %d %% %d ) = %d \n\n", num4, num5, num5, num6, num6, num4, result5);
}