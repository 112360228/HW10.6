#include <stdio.h>



int main() {
	int choice;
	float weight, height, bmi;

	printf("請選擇單位：\n");
	printf("1. 公制單位 (公斤和米)\n");
	printf("2. 英制單位 (磅和英寸)\n");
	scanf("%d", &choice);

	if (choice == 1) {
		printf("請輸入體重（公斤）：");
		scanf("%f", &weight);
		printf("請輸入身高（米）：");
		scanf("%f", &height);

		bmi = weight/(height*height);
		printf("您的BMI為：%.2f\n", bmi);
	}
	else if (choice == 2) {
		printf("請輸入體重（磅）：");
		scanf("%f", &weight);
		printf("請輸入身高（英寸）：");
		scanf("%f", &height);

		bmi = weight *703/ (height*height);
		printf("您的BMI為：%.2f\n", bmi);
	}
	else {
		printf("無效的選擇。\n");
	}
	if (bmi < 18.5) {
		printf("Underweight:\tless than 18.5");
	}
	else if (bmi >= 18.5 || bmi <= 24.9) {
		printf("Normal:\tbetween 18.5 to 24.9");
	}
	else if (bmi <= 29.9 || bmi >= 25) {
		printf("Overweight:\tbetween 25 to 29.9");
	}
	else {
		printf("Obese:\t30 or greater");
	}
	return 0;
}