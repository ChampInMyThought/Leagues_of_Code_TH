#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i=a+(a%2); i<=b; i+=2){
		printf("%d\n", i);
	}
	return 0;
}


