#include <stdio.h>

int pow(int n)
{
	int result = 1;
	for (int i = 0; i < n; i++)
		result *= 2;
	return result;
}

void Dec_to_Bi(int n)
{
	int power = 1, i = 0;
	if (n == 0)
		printf("0");
	else
	{
		while (n >= power)
			power *= 2, i++; // i�� �ڸ����� �ش�, power�� n �ٷ� ���� 2�� �ŵ�����
		printf("1");
		n = n - power / 2;	 // �� �տ� 1 ��� �� ���� �� ��� 

		for (int count = 2; count <= i; count++)	// ���� �ڸ��� 1�� �� �� ����
			if (n >= pow(i - count))	// ���� ���� 2 ^ [ ��ü �ڸ��� - (ó��~���� �ڸ���) ]���� ũ�� ���� �ڸ��� 1 ��  
			{
				printf("1");
				n = n - pow(i - count);	// 1 �ְ� ���� �� ���
			}
			else
				printf("0");		// 1�� �ƴ� ��� 0 ����
	}
}

int main(void)
{
	int num2;
	printf("10���� num : "), scanf("%d", &num2);
	Dec_to_Bi(num2);
}