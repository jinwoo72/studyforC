#include <stdio.h>

int main(void)
{
	
	return 0;
}

//�Լ��� ���� 
//��������O ��ȯ ��O
int Add(int num, int num2)
{
	int result = num1+num2;
	return result;
}
//��������O ��ȯ ��X
void ShowAddResult(int num)
{
	printf("������� ���: %d \n", num);
}//��ȯ���� void�� ����, ��ȯ���� ����. 
//��������X ��ȯ ��O
int ReadNum(void)
{
	int num;
	scanf("%d", &num);
	return num;
}//�������ڸ� void�� ����, ���ڸ� �������� ����.
void HowToUseThisProg(void)
{
	printf("~ \n");
 } 
