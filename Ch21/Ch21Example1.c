#include <stdio.h>

int putchar(int c);			// ǥ�� ��� ��Ʈ������ �������� ����
int fputc(int c, FILE* stream);		// ��� ��Ʈ���� ����� �ƴ� �ٸ������� ���� ����, ���Ĵ� putchar�� ����



int getchar(void);			// ǥ�� �Է� ��Ʈ��(Ű����) ���κ��� ���� �Է� �� ��ȯ
int fgetc(FILE* stream);	// ���� ���� ��Ʈ���� Ű���� �ƴ� �ٸ� ������ ���� ����, ���Ĵ� getchar�� ����

int main(void)
{
	int n1, n2;
	n1 = getchar();			// n1 ������ Ű���� ���� ���۹���
	n2 = fgetc(stdin);		// n2 ������ Ű���� ���� ���۹��� ( stdin �ǹ� : ǥ�� ��Ʈ�� ��� --> getchar�� ���� �Լ��� ��)

	putchar(n1);
	fputc(n2, stdout);


	// getchar, fgetc ���� n1�� ���� �Է�, n2�� ���� Ű �Է� --->  putchar, fputc ���� n1, n2 ���

	
	int ch;
	while (1)
	{
		ch = getchar();
		if (ch == EOF)
			break;
		putchar(ch);
	}

	// ctrl+z �� �Է� �� getchar()�� EOF (��� -1)��ȯ --> ���α׷� ����
	
	// getchar, putchar�� int�� ��ȯ�� ���� : EOF�� �� -1�� ��ȯ�ؾ� �ϱ� ����

	return 0;
}
