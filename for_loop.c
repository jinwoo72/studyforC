#include <stdio.h>

int main(void)
{
	int a, b;
	int result = 0;
	printf("�� ���� �Է�: ");
	scanf("%d %d", &a, &b);
	
	result = a>b ? a-b : b-a;
	printf("�� ���� ��: %d", result);
	
	return 0;
}
