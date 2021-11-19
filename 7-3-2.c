#include <stdio.h>

int main(void)
{
	int i = 0;
	int total = 0;
	
	do
	{
		if(i%2 == 0){
			total += i;
		}
		i++;
	}while(i<=100);
	
	printf("%d", total);
	
	return 0;
}
