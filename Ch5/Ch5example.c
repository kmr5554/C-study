# include <stdio.h>

int main(void)
{	//1�� ����

	int x1, y1, x2, y2;
	int width;
	printf("point 1(x,y) : ");
	scanf("%d %d", &x1, &y1);

	printf("point 2(x, y) : ");
	scanf("%d %d", &x2, &y2);

	width = (x2-x1)*(y2-y1);
	printf("Rengtangular width : %d\n\n", width);
	
	//2�� ����
	double num1, num2;
	printf("input num1, num2 : ");
	scanf("%lf %lf", &num1, &num2);		//�Է����� double ���� �� %lf

	printf("plus, minus, product, divide : %f, %f, %f, %f\n\n", num1 + num2, num1 - num2, num1 * num2, num1 / num2);		//������� double ������ %f

	//4�� ����
	int ascii;
	printf("input number : ");
	scanf("%d", &ascii);
	printf("ascii alphabet : %c\n\n", ascii);

	//5�� ����
	char alphabet;
	printf("input alphabet : ");
	scanf(" %c", &alphabet);   // ���� scanf���� ����ģ �� %c�� �޾Ƶ��̱� ������ ���� ���� -> %�տ� �� ĭ ���� �������
	printf("%d", alphabet);
	return 0;


	


}