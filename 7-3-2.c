#include <stdio.h>

int main(void)
{
	int i, num;
	int total = 0;
	printf("0���� num������ ����, num�Է� : "); 
	scanf("%d", &num);

	
	for(i = 0; i<=num; i++){
		total += i;
	}
	printf("total : %d", total);
	
	return 0;
}
