#include <stdio.h>

int record[5][5];

void WriteRecord(void) //학생의 과목 성적을 입력 및 학생 별 성적 합계 
{
	int sum;
	int i, j;
	for(i=0;i<4;i++){
		sum=0;
		printf("%d번째 학생의 성적입력 \n", i+1); 
		for(j=0;j<4;j++){
			printf("과목 %d :  ", j+1);
			scanf("%d", &record[i][j]);
			sum += record[i][j];
		}
		record[i][4]=sum;
	}
}

void WriteSumRecord(void)//과목 별 성적 합계 
{
	int sum=0;
	int i, j;
	for(i=0;i<4;i++){
		sum=0;
		for(j=0;j<4;j++){
			sum += record[j][i];
		}
		record[4][i] = sum;
		record[4][4] += sum;
	}
}
void ShowAllRecord(void)//출력 
{
	int i, j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d ", record[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	WriteRecord();
	WriteSumRecord();
	ShowAllRecord();

	return 0;
}
