#include <stdio.h>

void Problem1(void)
{
	int arr1[5], i;
	for (i = 0; i < sizeof(arr1) / sizeof(int); i++)
		printf("arr[%d] : ", i), scanf("%d", &arr1[i]);

	int min, max, sum;
	min = max = sum = arr1[0];

	for (i = 1; i < sizeof(arr1) / sizeof(int); i++)
	{
		if (arr1[i] >= max)
			max = arr1[i];
		if (arr1[i] < min)
			min = arr1[i];
		sum += arr1[i];
	}
	printf("min, max, sum : %d, %d, %d\n", min, max, sum);

}

void Problem2(void)
{
	char arr2[] = { "Good Time" };
	for (int i=0 ; i< sizeof(arr2)/sizeof(char) ; i++)
		printf("%c", arr2[i]);

	printf("\n%d\n", sizeof(arr2) / sizeof(char));

	char arr3[] = { 'G','o','o','d',' ','T','i','m','e' };
	for (int i = 0; i < sizeof(arr3) / sizeof(char); i++)
		printf("%c", arr3[i]);

	printf("\n%d\n", sizeof(arr3) / sizeof(char));

	// arr2와 3의 각 요소 출력 시에는 동일한 결과 얻어짐

	printf("%s %s", arr2, arr3); 
	
	// arr2와 3를 %s로 출력 시에는 arr3에는 null이 들어가지 않아 결과 이상하게 나타남

}

int main(void)
{
	Problem1();
	Problem2();
}

/*
char str1[] = { "Good" };
char str2[] = { 'G','o','o','d' };
*/