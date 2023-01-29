#include <stdio.h>

void Practice1(void)
{
	int num = 20;
	const int* ptr = &num;
	// *ptr=30;   :  ptr 포인터를 활용해 해당 주소에 저장된 값 변경하는 것 불가
	num = 30;	// ptr 사용 안하면 변경 가능

	int num1 = 10;
	int const* ptr1 = &num1;
	// ptr1=&num;  :  ptr1 포인터가 가리키는 주소 변경 불가
	
	int num2 = 100;
	const int const* ptr2 = &num2;
	// *ptr2 = 200 => 불가능
	// ptr2 = &num1 => 불가능
}

void ShowAllData(const int *arr, int len)	// 여기 const 없으면 arr[2]=100 이라는 코드 넣을 때 array 값이 바뀌게 됨.
											// 포인터를 매개변수로 받을 경우 함수에 의해 변수의 값이 바뀔 수 있으므로 이를 방지하기 위해 const 사용
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