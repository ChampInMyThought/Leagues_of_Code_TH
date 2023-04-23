#include <stdio.h>

int main() {
	int score;
	scanf("%d", &score);
	if(score > 80){
		printf("Achieved\n");
	}
	else if(score > 40){
		printf("Developing\n");
	}
	else{
		printf("Emerging\n");
	}
	return 0;
}
