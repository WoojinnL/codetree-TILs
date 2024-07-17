#include <stdio.h>

int Isright(int n) {
	int num[3] = {n / 100, n / 10 % 10, n % 10};
	if (n % 2 == 0 && (num[2] + num[1] + num[0]) % 5 == 0)
		return 1;
	else
		return 0;
}

int main() {
	int n, IsBool;
	scanf("%d", &n);
	IsBool = Isright(n);
	if (IsBool == 1)
		printf("Yes");
	else
		printf("No");
}