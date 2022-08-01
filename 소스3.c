#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	int i, j;
	int array1[3][3];
	int array2[3][3];
	int answer[3][3];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++) {
			printf("array1 [%d][%d]입력: ", i + 1, j + 1);
			scanf_s("%d", &array1[i][j]);
		}

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++) {
			printf("array2 [%d][%d]입력: ", i + 1, j + 1);
			scanf_s("%d", &array2[i][j]);
		}

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++) {
			answer[i][j] = array1[i][j] + array2[i][j];
		}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%3d", array1[i][j]);
		}
		if (i == 1)printf("\t+\t");
		else printf("\t \t");
		for (j = 0; j < 3; j++) {
			printf("%3d", array2[i][j]);
		}
		if (i == 1)printf("\t=\t");
		else printf("\t \t");
		for (j = 0; j < 3; j++) {
			printf("%3d", answer[i][j]);
		}
		printf("\n");
	}
	return 0;

}