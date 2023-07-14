#include <stdio.h>

int main(){
	int nums[3];
	int min_num;
	int gcd = 1;

	for(int i = 0; i < 3; ++i){
		printf("Enter number %d: ",i+1);
		scanf("%d",&nums[i]);
	}

	if(nums[0] < nums[1] && nums[0] < nums[2]){
		min_num = nums[0];
	}else if(nums[1] < nums[0] && nums[1] < nums[2]){
		min_num = nums[1];
	}else{
		min_num = nums[2];
	}
	
	for(int i = 2; i <= min_num; ++i){
		if(nums[0] % i == 0 && nums[1] % i == 0 && nums[2] % i == 0){
			gcd = i;
		}
	}

	printf("The greatest common divisor is %d\n",gcd);
}
