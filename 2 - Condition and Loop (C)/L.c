#include <stdio.h>

int main() {
	int n, x, sum = 0;
	scanf("%d", &n);
	for(int i=2; i<=n; ++i){
		scanf("%d", &x);
		sum += x;
	}
	printf("%d\n", n * (n + 1) / 2 - sum);
	return 0;
}


