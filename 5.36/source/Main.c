#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}

	unsigned long long int prev1 = 0;
	unsigned long long int prev2 = 1;
	unsigned long long int result = 0;

	for (unsigned int i = 2; i <= n; ++i) {
		result = prev1 + prev2;
		prev1 = prev2;
		prev2 = result;
	}

	return result;
}

int main() {
	unsigned int n;
	printf("請輸入要計算的費波那契數的項數：");
	scanf("%u", &n);

	unsigned long long int result = fibonacci(n);
	printf("第 %u 個費波那契數為 %llu\n", n, result);

	return 0;
}
