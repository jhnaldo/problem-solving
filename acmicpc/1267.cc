#include <stdio.h>

int main() {
	int n;
	int young, min;

	scanf("%d", &n);
	young = min = 0;
	while(n--) {
		int time;
		scanf("%d", &time);
		young += (time / 30 + 1) * 10;
		min += (time / 60 + 1) * 15;
	}
	if (min == young) printf("Y M %d\n", young);
	else if (min < young) printf("M %d\n", min);
	else printf("Y %d\n", young);
	return 0;
}
