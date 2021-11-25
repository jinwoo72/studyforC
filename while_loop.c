#include <stdio.h>


int numComp(int num1, int num2);// 크기를 비교하는 함수 
int getAbs(int num); // 절댓값 반환하는 함수 

int main(void)
{
	int num1, num2;
	int result;
	printf("두 정수 입력: ");
	scanf("%d %d", &num1, &num2);
	printf("%d와 %d 중 큰 수의 절댓값 : %d", num1, num2, numComp(num1, num2));
	return 0;
}
int numComp(int num1, int num2){
	if(getAbs(num1)>getAbs(num2)){
		return num1;
	} else{
		return num2;
	}
}
int getAbs(int num){
	if(num>=0){
		return num;
	} else{
		return num*(-1);
	}
}
