#include <stdio.h>

int main(){
	char arr[8];

	printf("Enter the text(len = 8): ");
	scanf("%8s",arr);

	for(int i = 7; i >= 0; i--){
		printf("%c",arr[i]);
	}
	puts("");

	return 0;
}
