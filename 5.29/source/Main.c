#include <stdio.h>

// ��ƥΩ�p���Ӿ�ƪ��̤p�����ơ]LCM�^
int lcm(int num1, int num2) {
	int max = (num1 > num2) ? num1 : num2; // �����j����
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
	printf("�п�J��Ӿ��: ");
	scanf("%d %d", &num1, &num2);
	int result = lcm(num1, num2);
	printf("�̤p�����ƬO: %d\n", result);
	return 0;
}
