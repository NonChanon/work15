#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
		
		if (i % 3 == 0 && i % 4 == 0 && i % 5 == 0) {
			printf("It's divisible by 3 ,4 ,5\n");
		}
		else if (i % 3 == 0) {
			printf("It's divisible by 3\n");
		}
		else if (i % 4 == 0) {
			printf("It's divisible by 4\n");
		}
		else if (i % 5 == 0) {
			printf("It's divisible by 5\n");
		}
		else {
			printf("%d\n", i);
		}
	}
	return 0;
}