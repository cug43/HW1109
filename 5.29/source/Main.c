#include <stdio.h>

// ㄧ计ノ璸衡ㄢ俱计程そ计LCM
int lcm(int num1, int num2) {
	int max = (num1 > num2) ? num1 : num2; // т耕计
	int lcm_result = max;

	while (1) {
		if (lcm_result % num1 == 0 && lcm_result % num2 == 0) {
			break;
		}
		lcm_result += max;
	}

	return lcm_result;
}

int main() {
	int num1, num2;
	printf("叫块ㄢ俱计: ");
	scanf("%d %d", &num1, &num2);
	int result = lcm(num1, num2);
	printf("程そ计琌: %d\n", result);
	return 0;
}
