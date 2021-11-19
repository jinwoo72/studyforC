#include <stdio.h>

int main(void)
{
	int a=0;
	
	while(a<5){
		int b = 0;
		while(b<a){
			printf("o");
			b++;
		}
		printf("*\n");
		a++;
	}
	
	


	return 0;
}
