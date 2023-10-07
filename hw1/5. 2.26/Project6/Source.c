#include <stdio.h>

int main() {
	int a, b;
	printf("input two number");
	scanf("%d %d", &a, &b);
	if (a%b == 0) {
		printf("%d is the mutiple of %d ", a, b);
	}
	else {
		printf("%d is not the mutiple of %d ", a, b);
	}
	return 0;
}