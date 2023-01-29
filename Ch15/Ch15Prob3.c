#include <stdio.h>

void swap(int* param, int len, int* SamParam)
{
	int i=0;
	int j = len;
	int idx;

	for (idx=0 ; idx<len; idx++)
		if (SamParam[idx] % 2 != 0)
		{
			param[i] = SamParam[idx];
			i++;
		}
		else
		{
			param[j-1] = SamParam[idx];
			j--;
		}
}

int main(void)
{
	int n1,n2,n3,n4, n5, n6, n7, n8, n9, n10;
	int arr[10];
	printf("Input : "), scanf("%d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);
	int SampleArr[10] = { n1,n2,n3,n4, n5, n6, n7, n8, n9, n10 };
	swap(arr, sizeof(arr)/sizeof(int), SampleArr);
	
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}