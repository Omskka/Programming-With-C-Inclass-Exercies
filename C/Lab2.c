#include <stdio.h>

int main(){
	int num;
	int total = 0;
	int i = 0;
	
	while(1){

		printf("enter a series in increasing order: ");
		scanf("%d",&num);

		int buffer;

		if(total == 0)
			buffer = num - 5;
		

		if (buffer >= num)
			break;

		buffer = num;

		if (num > 0)
			total = total + num;
		

		if (num < 0){
			printf("you have entered a negative number\n");
			break;
		}

		if (num == 0)
			continue;

		if(num > 0)
			i++;
	}
	int ret;
	ret = total/i;
	printf("the average : %d", ret);
}