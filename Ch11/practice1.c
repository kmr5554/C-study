#include <stdio.h>

void Arrpractice(void)
{
	int OneDimArr[4]; //  �迭 �̷�� ��� : int�� , �迭 �̸� : OneDimArr , �迭 ���� : [4]
	float arr1[10];	  // ���� 10�� float�� 1���� �迭
	double arr2[12];	  // ���� 12�� double�� 1���� �迭
	
	/* int len = 20;
	   int arr3[len]   :  visual studio������ �迭 ũ�⸦ ������ �Ҵ��� ���� ����  */
}

void Arrpractice2(void)
{
	int arr[3];
	arr[0] = 10, arr[1] = 20, arr[2] = 30; // arr[3] = 40 ���� �迭 ũ�⺸�� ū �ε����� ����ϸ� ������ ���� �߻� ����
	
	int sum = 0, i;
	for (i = 0; i < 3; i++)
		sum += arr[i];
	printf("result : %d\n", sum);
	return 0;
}

void Arrpractice3(void)
{
	int arr1[5] = { 1,2,3,4,5 };	 // ����� ���ÿ� ��� �ʱ�ȭ ����
	int arr2[ ] = { 1,2,3,4,5,6,7 }; // �ڵ����� �迭 ũ�� ������
	int arr3[5] = { 1,2,3 };		 // 4,5��° ��Ҵ� 0���� ä����

	int ar1len, ar2len, ar3len, i;
	printf("arr1,2,3 ũ�� : %d, %d, %d\n", sizeof(arr1), sizeof(arr2), sizeof(arr3));
	ar1len = sizeof(arr1) / sizeof(int);	// arr1�� ������ : int������ 4 x �迭 ũ�� 5 = 20
	ar2len = sizeof(arr2) / sizeof(int);
	ar3len = sizeof(arr3) / sizeof(int);

	for (i = 0; i < ar1len; i++)	// ar1len : arr1�� ũ�� ��ȯ
		printf("%d ", arr1[i]);
	return 0;
}

int main(void)
{
	Arrpractice3();
	return 0;
}