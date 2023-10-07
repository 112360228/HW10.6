#include <stdio.h>
int main() {
	int a, b, c;
	printf("块俱计");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c) {
		printf("%d程", a);
	}
	else if (c > b && a < c) {
		printf("%d程", c);
	}
	else if (c < b && a < b) {
		printf("%d程", b);
	}
	if (a < b && a < c) {
		printf("%d程", a);
	}
	else if (c < b && a > c) {
		printf("%d程", c);
	}
	else if (c > b && a > b) {
		printf("%d程",b);
	}

}