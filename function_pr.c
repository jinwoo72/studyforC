#include <stdio.h>

int Add(int num1, int num2)
{
	return num1+num2;
}


int main(void)
{
	int result;
	result = Add(3, 4);//ÇÔ¼ö¸¦ È£Ãâ. 
	printf("µ¡¼À°á°ú: %d \n", result);
	return 0;
}
