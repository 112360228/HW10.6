#include <stdio.h>
int main() {
	int a, b, c;
	printf("��J�T�Ӿ��");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c) {
		printf("%d�̤j", a);
	}
	else if (c > b && a < c) {
		printf("%d�̤j", c);
	}
	else if (c < b && a < b) {
		printf("%d�̤j", b);
	}
	if (a < b && a < c) {
		printf("%d�̤p", a);
	}
	else if (c < b && a > c) {
		printf("%d�̤p", c);
	}
	else if (c > b && a > b) {
		printf("%d�̤p",b);
	}

}