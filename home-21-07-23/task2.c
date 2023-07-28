#include <stdio.h>
#include <ctype.h>

int main(){
	char arr[8];

	printf("Enter the string(len = 8): ");
	scanf("%8s",arr);

	for(int i = 0; i < 8; i++){
		if(isdigit(arr[i])){
			printf("%c ",arr[i]);
		}
	}
	puts("");

	return 0;
}
