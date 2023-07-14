#include <stdio.h>

int main(){
	int num1,num2,num3;
	puts("Enter the first number");
	scanf("%d",&num1);
	puts("Enter the second number");
	scanf("%d",&num2);
	puts("Enter the third number");
	scanf("%d",&num3);
	if(num1 == num2 || num1 == num3 || num2 == num3){
		if(num1 > num2 && num1 > num3){
			printf("Max is %d\n",num1);
		}else if(num2 > num1 && num2 > num3){
			printf("Max is %d\n",num2);
		}else{
			printf("Max is %d\n",num3);
		}
	}else{
		puts("No two of them are equal");
	}
}
