#include <stdio.h>

void ShowArayElem(int *param, int len)	

// arr1 : {1,2,3}�� �迭 �ּ� ��Ÿ���� ������ & �迭 �̸� ����
//int *param=arr1 �̹Ƿ� param���� �迭 �ּ� ����Ű�� pointer ����

{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", param[i]);	// param[i]�� arr[i]�� ���� ����̶�� ���� ��
	printf("\n");
}

void ex1(void)
{
	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 4,5,6,7,8 };
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
	return 0;
}

// �Լ��� ���ڷ� ���Ǵ� �Ű������� ��� int * param ��� int param[ ]���� ��ü ����

void AddArayElem(int *param,int len,int add)

// �Լ� ������ arr ũ��� ���� �Ұ� :  �迭 arr�� ũ�Ⱑ �ƴ� ������ ���� arr�� ũ�Ⱑ �����Ǳ� ����

{
	int i;
	for (i = 0; i < len; i++)
		param[i] += add;	// param�� arr�� ���� �迭 �ּҸ� ��Ÿ���Ƿ� �迭 ���� ���Ҹ� �ٲ��־� �Լ��� ����Ǿ ���Ұ� ����Ǿ� ����
}

void ex2(void)
{
	int arr[3] = { 1,2,3 };
	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
	ShowArayElem(arr, sizeof(arr) / sizeof(int));
}

void practice(int* param, int len)
{
	printf("�ܺ� : %d, ���� : %d", len, sizeof(param) / sizeof(int));	
	
	// sizeof(arr) : �迭�̸� arr�� ����Ʈ ũ��		   (arr �迭�� ũ��)
	// sizeof(param) : ������ ���� param�� ����Ʈ ũ�� (arr �ּҰ��� ��� �޸��� ũ��)
}

void ex3(void)
{
	int arr[3] = { 1,2,3 };
	practice(arr, sizeof(arr) / sizeof(int));
}

int main(void)
{
	ex1(), printf("\n");
	ex2(), printf("\n");
	ex3(), printf("\n");
}

