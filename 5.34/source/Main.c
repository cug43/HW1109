#include <stdio.h>

double power(double base, int exponent) {
	// 基本情況：指數為0時，結果為1
	if (exponent == 0) {
		return 1;
	}
	// 如果指數為正數，遞歸計算base^(exponent-1)，然後乘以base
	else if (exponent > 0) {
		return base * power(base, exponent - 1);
	}
	// 如果指數為負數，遞歸計算base^(exponent+1)，然後除以base
	else {
		return 1.0 / (base * power(base, -exponent - 1));
	}
}

int main() {
	double base;
	int exponent;

	printf("請輸入底數：");
	scanf("%lf", &base);
	printf("請輸入指數：");
	scanf("%d", &exponent);

	double result = power(base, exponent);
	printf("%.2lf 的 %d 次方 = %.2lf\n", base, exponent, result);

	return 0;
}
