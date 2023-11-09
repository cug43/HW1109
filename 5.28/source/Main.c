#include <stdio.h>

int main() {
	char input;
	char output;

	printf("請輸入一個大寫字母: ");
	scanf("%c", &input);

	// 檢查輸入是否為大寫字母
	if (input >= 'A' && input <= 'Z') {
		// 將大寫字母轉換為小寫字母
		output = input + 32;
		printf("轉換後的小寫字母為: %c\n", output);
	}
	else {
		printf("請輸入有效的大寫字母。\n");
	}

	return 0;
}
