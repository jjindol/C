#include <stdio.h>

int main(void)
{
	int number;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &number);

	switch (number)
	{
	case 0:
		printf("����\n");
		break;

	case 1:
		printf("�ϳ�\n");
		break;

	case 2:
		printf("��\n");
		break;

	default:
		printf("����\n");
		break;

		return 0;

	}