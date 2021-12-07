#include <stdio.h>
double CelToFah(double cel);
double FahToCel(double fah);

int main(void){
	int sel;
	double num,;
	printf("1. ¼·¾¾¸¦ È­¾¾·Î / 2. È­¾¾¸¦ ¼·¾¾·Î \n");
	printf("¼±ÅÃ>>");
	scanf("%d", &sel);
	
	if(sel == 1){
		printf("¼·¾¾ ÀÔ·Â: ");
		scanf("%lf", &num);
		printf("º¯È¯µÈ È­¾¾: %lf \n", CelTOfah(num));
	} else if(sel == 2){
		printf("È­¾¾ ÀÔ·Â: ");
		scanf("%lf", &num);
		printf("º¯È¯µÈ ¼·¾¾: %lf \n", FahToCel(num));
	} else
		printf("¼±ÅÃ ¿À·ù \n");
	return 0;
}

double CelToFah(double cel v ){
	return 1.8*cel+32;
}

double FahToCel(double fah){
	return (fah-32)/1.8;
}

