#include <stdio.h>

int main() {
	int n, x, cnt = 0;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &x);
		if(x == 0){
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}


