#include <stdio.h>

void prob1(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr, i = 0;
	while (i < sizeof(arr) / sizeof(int))
		(*ptr) += 2, ptr++, i++;	// ptr이 가리키는 배열 요소를 2 증가하고 ptr 주소 참조값을 4만큼 증가

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
		sum += *(ptr--);	//ptr이 가리키는 배열 요소를 더해주고 ptr 주소 참조값 감소
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
		*ptr1 = *ptr2, * ptr2 = temp;	// ptr1이 가리키는 배열 요소를 ptr2가 가리키는 배열 요소로 바꿈
		ptr1++, ptr2--;
	}

	printf("arr[5] = { ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr[i]);
	
	printf("} \n\n");
}

int main(void)
{
	// 문제 1번
	prob1();

	// 문제 2번
	prob2();

	// 문제 3번
	prob3();

	// 문제 4번
	prob4();
}

