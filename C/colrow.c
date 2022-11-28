#include <stdio.h>

int	main(){
	int row;
	int column;
	int i = 0;
	int j = 0;
	int num = 1;
	printf("Enter number of rows\n");
	scanf("%d",&row);
	printf("Enter number of columns\n");
	scanf("%d",&column);

	while (i < row){
		j = 0;
		while (j < column){
			printf("%d",num);
			num++;
			j++;
		}
		printf("\n");
		i++;
	}
}