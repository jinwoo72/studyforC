#include <stdio.h>

int main(void)
{
	int num;
	int i = 0;
	int total = 0;
	while(i<5){
		scanf("%d", &num);
		while(num<1){
		printf("�ٽ� �Է����ּ���.\n");
		scanf("%d", &num);
		}
		i++;
		total += num;
	}
	printf("%d", total);

	
	
	
	
	return 0;
}
