#include <stdio.h>

int main() {
	int a;
	printf("輸入一數判斷基數偶數");
	scanf("%d", &a);
	if (a % 2 == 1) {
		printf("The number is odd");
	}
	else {
		printf("The number is even");
	}
}