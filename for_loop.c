#include <stdio.h>

int main(void)
{
	int a, b;
	int result = 0;
	printf("두 정수 입력: ");
	scanf("%d %d", &a, &b);
	
	result = a>b ? a-b : b-a;
	printf("두 수의 차: %d", result);
	
	return 0;
}
