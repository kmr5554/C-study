#include <stdio.h>

void BubbleSortUp(int ary[], int len);
void BubbleSortDown(int ary[], int len);

int main(void)
{
	int arr[4] = { 3,2,4,1 };
	int i;

	BubbleSortUp(arr, sizeof(arr) / sizeof(int));
	for (i = 0; i < 4; i++)
		printf("%d ", arr[i]);

	printf("\n\n");

	int arr2[30];
	int j;
	printf("숫자 7개 입력 : ");
	for (j = 0; j < 7; j++)
		scanf("%d", &arr2[j]);

	BubbleSortDown(arr2, sizeof(arr2) / sizeof(int));
	for (j = 0; j < 7; j++)
		printf("%d ", arr2[j]);

	return 0;
}

void BubbleSortUp(int ary[], int len)
{
	int i, j;
	int temp;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < (len - i) - 1; j++)
		{
			if (ary[j] > ary[j + 1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}

void BubbleSortDown(int ary[], int len)
{
	int m, n, temp;

	for (m = 0; m < len-1; m++)
	{
		for (n = len-1; n>m; n--)
		{
			if (ary[n] > ary[n-1])
			{
				temp = ary[n-1];
				ary[n-1] = ary[n];
				ary[n] = temp;
			}
		}
	}
}
