#include <stdio.h>

int main() {
	int score;
	scanf("%d", &score);
	if(score > 35){
		printf("CANCEL SCHOOL\n");
	}
	else if(score > 30){
		printf("CANCEL TWO CLASSES\n");
	}
	else{
		printf("NORMAL CLASSES\n");
	}
	return 0;
}
