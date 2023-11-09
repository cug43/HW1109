#include <stdio.h>

double power(double base, int exponent) {
	// �򥻱��p�G���Ƭ�0�ɡA���G��1
	if (exponent == 0) {
		return 1;
	}
	// �p�G���Ƭ����ơA���k�p��base^(exponent-1)�A�M�᭼�Hbase
	else if (exponent > 0) {
		return base * power(base, exponent - 1);
	}
	// �p�G���Ƭ��t�ơA���k�p��base^(exponent+1)�A�M�ᰣ�Hbase
	else {
		return 1.0 / (base * power(base, -exponent - 1));
	}
}

int main() {
	double base;
	int exponent;

	printf("�п�J���ơG");
	scanf("%lf", &base);
	printf("�п�J���ơG");
	scanf("%d", &exponent);

	double result = power(base, exponent);
	printf("%.2lf �� %d ���� = %.2lf\n", base, exponent, result);

	return 0;
}
