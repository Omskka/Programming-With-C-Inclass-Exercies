#include <stdio.h>

int main(){

	int is_colored = 0; // black
 	int num_of_pencils = 0;
	int num_of_rubbers = 0;
	int num_of_notebooks = 0;
	float total = 0;

	printf("Pencil: Colored 2.00,Black:1.00\n");
	printf("Rubber: 1.50\n");
	printf("Notebook: 4.00\n");
	printf("Due to a system failure our shop accepts coupons only, your total must be at least 2.50\n");
	printf("Our pencils are either colored or black. If you're buying pencils please put 1 forcolored and 0 for black\n");
	printf("You cannot buy both colored and black pencils at the same time.");
	printf("Please enter the number of items you will buy for all stock items.\nEnter 2 inputs for pencils -- number of pencils and type (1 for colored, 0 for black),\nnumber of rubbers and number of notebooks, a total of 4 inputs 3 of them separated with commas.\n");

	scanf("%d %d, %d, %d", &num_of_pencils, &is_colored, &num_of_rubbers, &num_of_notebooks);

	if (num_of_notebooks < 0 || num_of_pencils < 0 || num_of_rubbers < 0)
		printf("You entered an invalid # of items for at least one of the stock items");
	else if(num_of_pencils + num_of_rubbers + num_of_notebooks == 0)
    	printf("You changed your mind? Please come back some other time!\n");
  	else if(((num_of_rubbers + num_of_notebooks == 0) && (num_of_pencils == 2 && is_colored == 0)) ||
          ((num_of_pencils + num_of_notebooks == 0) && (num_of_rubbers == 1)) ||
          ((num_of_rubbers + num_of_notebooks == 0) && (num_of_pencils == 1 && is_colored == 1)))
    		printf("You bought only 2 black pencils. You should buy items worth at least 2.50\n");
	if(is_colored)
       total += num_of_pencils * 2.00;
    else
       total += num_of_pencils * 1.00;

    total += num_of_rubbers * 1.50 + num_of_notebooks * 4.00; 
	
	if (total > 10){
		total *= 0.9;
		printf("Congratulations! You have a 10%% discount for spending at least 10.0!\n");
	}
 	printf("Your total is:%6.3f\n", total);
	return 0;
	}
