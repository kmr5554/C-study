#include <stdio.h>

// 1. �������� o , ��ȯ�� o �� ���

/*���� �Լ�*/

int Add(int num1, int num2)
{
	int result = num1 + num2;
	return result;
}

// 2. �������� X �Ǵ� ��ȯ�� X

void ShowAddResult(int num)		/*printf ����� �Լ�*/
{
	printf("result : %d\n", num);   // ��ȯ�� void�̹Ƿ� ��ȯ�� X --> return �� ����
}
int ReadNum(void)			/*scanf ����� �Լ�*/
{
	int num;
	scanf("%d", &num);	// ���� ���� void �̹Ƿ� �������� X 
	return num;
}
void HowToUseThisProg(void)
{
	printf("�� ���� ���� �Է� : "); // ��ȯ��, �������� ��� void
}

int main(void)
{
	HowToUseThisProg();
	int result, num1, num2;
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	return 0;
}
