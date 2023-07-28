#include <stdio.h>

int main(){
	int n = 0;

	printf("Enter the len of array: ");
	scanf("%d",&n);

	int arr[n];

	for(int i = 0; i < n; i++){
		printf("Enter the number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(int i = 0; i < n; i++){
		printf("%d ",arr[i]);
	}
	
	printf("\n");

	return 0;
}
