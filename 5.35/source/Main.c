#include <stdio.h>

// 獶患耴ㄧ计璸衡禣猧ê计
unsigned long long int fibonacci(unsigned int n) {
	if (n <= 1) {
		return n;
	}

	unsigned long long int prev = 0;
	unsigned long long int current = 1;

	for (unsigned int i = 2; i <= n; ++i) {
		unsigned long long int next = prev + current;
		prev = current;
		current = next;
	}

	return current;
}

int main() {
	unsigned int n;
	printf("叫块璶璸衡禣猧ê计竚: ");
	scanf("%u", &n);

	unsigned long long int result = fibonacci(n-1);
	printf("材 %u 禣猧ê计琌 %llu\n", n, result);

	// 絋﹚程ゴ禣猧ê计
	unsigned int i = 0;
	while (1) {
		unsigned long long int fib = fibonacci(i);
		if (fib > 0) {
			i++;
		}
		else {
			break;
		}
	}
	printf("╰参ゴ程禣猧ê计琌材 %u \n", i - 1);

	return 0;
}
