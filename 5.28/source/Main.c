#include <stdio.h>

int main() {
	char input;
	char output;

	printf("�п�J�@�Ӥj�g�r��: ");
	scanf("%c", &input);

	// �ˬd��J�O�_���j�g�r��
	if (input >= 'A' && input <= 'Z') {
		// �N�j�g�r���ഫ���p�g�r��
		output = input + 32;
		printf("�ഫ�᪺�p�g�r����: %c\n", output);
	}
	else {
		printf("�п�J���Ī��j�g�r���C\n");
	}

	return 0;
}
