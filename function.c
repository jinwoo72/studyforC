#include <stdio.h>

int main(void)
{
	
	return 0;
}

//함수의 형태 
//전달인자O 반환 값O
int Add(int num, int num2)
{
	int result = num1+num2;
	return result;
}
//전달인자O 반환 값X
void ShowAddResult(int num)
{
	printf("덧셈결과 출력: %d \n", num);
}//반환형이 void로 선언, 반환하지 않음. 
//전달인자X 반환 값O
int ReadNum(void)
{
	int num;
	scanf("%d", &num);
	return num;
}//전달인자를 void로 선언, 인자를 전달하지 않음.
void HowToUseThisProg(void)
{
	printf("~ \n");
 } 
