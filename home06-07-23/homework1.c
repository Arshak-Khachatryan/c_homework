#include <stdio.h>
#include <ctype.h>

int main(){
	char letter;
	printf("Enter the letter: ");
	scanf("%c",&letter);
	if(65 <= letter && 90 >= letter || 97 <= letter && 122 >= letter){
		switch(tolower(letter)){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				puts("Vowel");
				break;
			default:
				puts("Consonants");

		}
	}else{
		puts("It's not a letter");
	}
	return 0;
}
