#include <stdio.h>

int main(int argc, char* argv[])	// argv[]�� *argv�� �����Ƿ� ���ڴ� char** argv�� �����ϸ�, �̴� argv�� char�� ���� ������ �������� �ǹ� (���� ���Ͽ��� �ڼ���)
{
	int i = 0;
	printf("���� ���ڿ� �� : %d\n", argc);

	for (i = 0; i < argc; i++)
		printf("%d ��° ���ڿ� : %s\n", i + 1, argv[i]);
}

// cmdâ���� ��� �� ��   >Ch19 I like you 
// ���� �� �ڵ忡�� Ch19, I, like, you�� �� ���ҷ� ���� ������ char type ������ �迭[4]�� �����ϰ� argc�� 4�� �ڵ�������.