#include <stdio.h>

void Practice1(void)
{
	int num = 20;
	const int* ptr = &num;
	// *ptr=30;   :  ptr �����͸� Ȱ���� �ش� �ּҿ� ����� �� �����ϴ� �� �Ұ�
	num = 30;	// ptr ��� ���ϸ� ���� ����

	int num1 = 10;
	int const* ptr1 = &num1;
	// ptr1=&num;  :  ptr1 �����Ͱ� ����Ű�� �ּ� ���� �Ұ�
	
	int num2 = 100;
	const int const* ptr2 = &num2;
	// *ptr2 = 200 => �Ұ���
	// ptr2 = &num1 => �Ұ���
}

void ShowAllData(const int *arr, int len)	// ���� const ������ arr[2]=100 �̶�� �ڵ� ���� �� array ���� �ٲ�� ��.
											// �����͸� �Ű������� ���� ��� �Լ��� ���� ������ ���� �ٲ� �� �����Ƿ� �̸� �����ϱ� ���� const ���
{
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(void)
{
	Practice1();

	int arr1[3] = { 1,2,3 };
	ShowAllData(&arr1, sizeof(arr1) / sizeof(int));
	printf("%d", arr1[1]);

}