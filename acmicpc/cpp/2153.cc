#include <stdio.h>

bool is_prime(int n) {
	int i;
	for (i = 2; i*i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int num(char ch) {
	if ('A' <= ch && ch <= 'Z') return ch - 'A' + 27;
	if ('a' <= ch && ch <= 'z') return ch - 'a' + 1;
	return 0;
}

int main() {
	char str[21];
	int i, sum = 0;
	scanf("%s", str);
	for (i = 0; str[i]; i++) {
		sum += num(str[i]);
	}
	if (is_prime(sum)) printf("It is a prime word.\n");
	else printf("It is not a prime word.\n");
}
