#include <stdio.h>

int main(){
	int year;
	puts("Enter the year: ");
	scanf("%d",&year);
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
		puts("It's leap year");
	}else{
		puts("It isn't leap year");
	}
}
