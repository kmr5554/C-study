#include <stdio.h>

void prob1(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr, i = 0;
	while (i < sizeof(arr) / sizeof(int))
		(*ptr) += 2, ptr++, i++;	// ptr�� ����Ű�� �迭 ��Ҹ� 2 �����ϰ� ptr �ּ� �������� 4��ŭ ����

	printf("arr[5] = { ");
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);

	printf("} \n\n");
}

void prob2(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr, i = 0;
	while (i < 5)
		*(ptr + i) += 2, i++;

	printf("arr[5] = { ");
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);

	printf("} \n\n");
}

void prob3(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];
	int i, sum=0;

	for (i=0 ; i < 5 ; i++)
		sum += *(ptr--);	//ptr�� ����Ű�� �迭 ��Ҹ� �����ְ� ptr �ּ� ������ ����
	printf("sum : %d\n\n", sum);
}

void prob4(void)
{
	int arr[6] = { 1,2,3,4,5,6 };
	int * ptr1 = &arr[0], * ptr2 = &arr[5];
	int temp, i;

	for (i = 0; i < 3; i++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2, * ptr2 = temp;	// ptr1�� ����Ű�� �迭 ��Ҹ� ptr2�� ����Ű�� �迭 ��ҷ� �ٲ�
		ptr1++, ptr2--;
	}

	printf("arr[5] = { ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr[i]);
	
	printf("} \n\n");
}

int main(void)
{
	// ���� 1��
	prob1();

	// ���� 2��
	prob2();

	// ���� 3��
	prob3();

	// ���� 4��
	prob4();
}

