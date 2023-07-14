#include <stdio.h>

int main(){
	int num1,num2;
	puts("Enter the first number");
	scanf("%d",&num1);
	puts("Enter the second number");
	scanf(" %d",&num2);
	if(num1 > num2){
		printf("Max number is %d\n",num1);
		return 0;
	}
	printf("Max number is %d\n",num2);
}
