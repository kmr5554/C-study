#include <stdio.h>
int main(void)
{										/* int ������ = scanf()�� scanf���� ���� �Ҵ����� ������ ���Ȼ��� ������ ������ �߻��ϹǷ�
										    ������Ʈ �Ӽ� -> C/C++ -> �Ϲ� -> SDL �˻� '�ƴϿ�' ���� �ʿ� */
	int num1, num2, result;

	printf("num1= ");
	scanf("%d", &num1);				// scanf : num1�̶�� ������ �� ���ڸ� ����ڰ� �Է��ϰ� ����
	printf("num2= ");
	scanf("%d", &num2);

	result = num1 + num2;
	printf("result = %d \n", result);


	int a, b, c;
	printf("���� 3�� �Է� : ");
	scanf("%d %d %d", &a, &b, &c);    // %d ���̿� �޸� ������ b, c���� �Է��� �ȵ� ������ ���� ��
	printf("%d = %d + %d + %d\n", a+b+c,a,b,c);
	return 0;
}