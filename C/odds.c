#include <stdio.h>

int main(){

	int num = 0;
	int odds = 0;
	int total = 0;
	while(1){
	
		printf("Enter a number : ");
		scanf("%d",&num);

		if (num == 0)
		break;

		if (num > 0){
			total++;
		}

		if (num %2 != 0)
			odds++;
	}
	 printf("The user has entered %d number of positive values in total and %d of them are odd numbers\n", total, odds);
}