#include <stdio.h>

void Arrpractice(void)
{
	int OneDimArr[4]; //  �迭 �̷�� ��� : int�� , �迭 �̸� : OneDimArr , �迭 ���� : [4]
	float arr1[10];	  // ���� 10�� float�� 1���� �迭
	double arr2[12];	  // ���� 12�� double�� 1���� �迭
	
	/* int len = 20;
	   int arr3[len]   :  visual studio������ �迭 ũ�⸦ ������ �Ҵ��� ���� ����  */
}

int main(void)
{
	int arr[3];
	arr[0] = 10, arr[1] = 20, arr[2] = 30 // arr[3] = 40 ���� �迭 ũ�⺸�� ū �ε����� ����ϸ� ������ ���� �߻� ����
	
	int sum = 0, i;
	for (i = 0; i < 3; i++)
		sum += arr[i];
	printf("result : %d\n", sum);
	return 0;
}
