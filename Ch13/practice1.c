#include <stdio.h>

void ex1(void)
{
	int arr[4] = { 1,2,3,4 };		// �迭 �̸� = ��� ������ (�� ���� x)
	printf("array name : %p\n", arr);	// %p : �迭�̸��� �����Ͱ� ���� �ּ������� ��ȯ
	for (int i=0;i<(sizeof(arr)/sizeof(int)) ; i++)	
	printf("element %d : %p\n", i+1, &arr[i]);	// &arr[i] : �迭 ��Ҵ� �����Ͱ� �ƴϹǷ� &���� �迭�� i��° ��Ұ� ���� �ּ������� ��ȯ
}

void ex2(void)
{
	int arr1[3] = { 1,2,3 };
	double arr2[3] = { 1.1,2.2,3.3 };
	printf("%d %g\n", *arr1, *arr2);	// �迭 �̸��� �迭 ù ����� �ּ� �������� ���� ������

	*arr1 += 100, * arr2 += 100.5;		// �迭 ù ��Ұ��� ������Ŵ
	printf("%d %g\n\n", arr1[0], arr2[0]);
}

void ex3(void)
{
	int arr[3] = { 1,2,3 };
	int* ptr = &arr[0];	//ptr�� �迭 ù ����� �ּ������� ������
	printf("ptr[0]= %d , arr[0]= %d \n", ptr[0], arr[0]);	
	
	// pointer[ ] �� �ǹ� : ������ �ּҰ� ����Ű�� �޸𸮿� ����� n��° ��� ��ȯ

	printf("*ptr : %d, *arr : %d\n\n", *ptr, *arr); //���� ���ϰ�� ��µ�
}

void ex4(void)
{
	int arr[3] = { 11,22,33 };
	int* ptr = arr;
	printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2));	 // *(ptr+1)�� ���� ptr�� ����� �� ��ȭ X  VS.  *(++ptr)�� ���� ptr�� ����� ���� ��ȭ
	
	// ������ n ���� = n x sizeof(������ type) ��ŭ �ּ� ������ ���� = �����Ͱ� ����Ű�� ��� index�� n ����
	
	// ���� arr[i] = *(arr+i) �̴�.
}

int main(void)
{
	ex1();
	ex2();
	ex3();
	ex4();
}