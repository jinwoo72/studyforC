#include <stdio.h>
double CelToFah(double cel);
double FahToCel(double fah);

int main(void){
	int sel;
	double num,;
	printf("1. ������ ȭ���� / 2. ȭ���� ������ \n");
	printf("����>>");
	scanf("%d", &sel);
	
	if(sel == 1){
		printf("���� �Է�: ");
		scanf("%lf", &num);
		printf("��ȯ�� ȭ��: %lf \n", CelTOfah(num));
	} else if(sel == 2){
		printf("ȭ�� �Է�: ");
		scanf("%lf", &num);
		printf("��ȯ�� ����: %lf \n", FahToCel(num));
	} else
		printf("���� ���� \n");
	return 0;
}

double CelToFah(double cel v ){
	return 1.8*cel+32;
}

double FahToCel(double fah){
	return (fah-32)/1.8;
}

