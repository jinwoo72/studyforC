#include <stdio.h>


int numComp(int num1, int num2);// ũ�⸦ ���ϴ� �Լ� 
int getAbs(int num); // ���� ��ȯ�ϴ� �Լ� 

int main(void)
{
	int num1, num2;
	int result;
	printf("�� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);
	printf("%d�� %d �� ū ���� ���� : %d", num1, num2, numComp(num1, num2));
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
