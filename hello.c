#include <stdio.h>

int main(void)
{
	int num;
	int total=0;
	
	do
	{
		printf("정수 입력 : ");
		scanf("%d", &num);
		total += num;
	} while(num != 0);
	
	printf("total : %d", total);

	
	


	return 0;
}
