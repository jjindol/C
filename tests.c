#include<stdio.h>

int main() {
	int n;
	int arr[100];
	printf("경기 참가자의 수를 입력하세요 :");
	scanf_s("%d", &n);

	
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	for (int i = n - 1; i >= 0; i--) {
		printf("%d", arr[i]);
	}
}