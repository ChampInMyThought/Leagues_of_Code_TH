#include <stdio.h>

int main() {
	int a, b, c, d, t;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if(a > b){
		t = a;
		a = b;
		b = t;
	}
	if(c > d){
		t = c;
		c = d;
		d = t;
	}
	if(a <= c && b <= d){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}


