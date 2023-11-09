#include <stdio.h>

// �D���k��ƭp��O�i������
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
	printf("�п�J�n�p�⪺�O�i�����ƪ���m: ");
	scanf("%u", &n);

	unsigned long long int result = fibonacci(n-1);
	printf("�� %u �ӶO�i�����ƬO %llu\n", n, result);

	// �T�w�̤j�i���L���O�i������
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
	printf("�t�ΤW�i�H���L���̤j�O�i�����ƬO�� %u ��\n", i - 1);

	return 0;
}
