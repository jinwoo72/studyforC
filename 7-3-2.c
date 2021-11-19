#include <stdio.h>

int main(void)
{
	int i, num;
	int total = 0;
	printf("0부터 num까지의 덧셈, num입력 : "); 
	scanf("%d", &num);

	
	for(i = 0; i<=num; i++){
		total += i;
	}
	printf("total : %d", total);
	
	return 0;
}
