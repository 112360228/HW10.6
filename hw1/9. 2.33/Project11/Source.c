#include <stdio.h>

int main() {
	double totalMiles, costPerLiterGallon, milesPerLiterGallon, parkingFee, tolls;

	// 获取用户输入
	printf("請輸入一整天的總里程數（公里）：");
	scanf("%lf", &totalMiles);

	printf("請輸入汽油一公升/加侖多少錢（元）：");
	scanf("%lf", &costPerLiterGallon);

	printf("請輸入平均一公升/加侖能行駛多少公里：");
	scanf("%lf", &milesPerLiterGallon);

	printf("請輸入一天的停車費（元）：");
	scanf("%lf", &parkingFee);

	printf("請輸入一天的通行費(過路費)（元）：");
	scanf("%lf", &tolls);

	// 計算一天的花費
	double fuelCost = (totalMiles / milesPerLiterGallon) * costPerLiterGallon;
	double totalCost = fuelCost + parkingFee + tolls;

	// 顯示結果
	printf("一天開車所需的花費為：%.2lf 元\n", totalCost);

	return 0;
}