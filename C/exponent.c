#include <stdio.h>
#include <math.h>

double ft_expo(){
	int operation;
	double base1,base2,exp1,exp2;


	printf("Enter your operation number \n1 for Product\n2 for Quotinet\n3 for Power\n4 for Zero Exponent\n5 for Negative Exponent\n");
	scanf("%d",&operation);

	if (operation == 1){
		printf("Enter base1 and exponent1");
		scanf("%lf %lf",&base1,&exp1 );

		printf("Enter base2 and exponent2");
		scanf("%lf %lf",&base2,&exp2);

		double sum = exp1 + exp2;

		if (base1 == base2)
			return(pow(base1, sum));
		else
			return((pow(base1,exp1) * pow(base2,exp2)));
	}
	else if (operation ==2){
		printf("Enter base1 and exponent1");
		scanf("%lf %lf",&base1,&exp1 );

		printf("Enter base2 and exponent2");
		scanf("%lf %lf",&base2,&exp2);

		double sub = exp1 - exp2;

		if (base1 == base2)
			return(pow(base1,sub));
		else
			return((pow(base1,exp1) / pow(base2,exp2)));
	}
	else if (operation == 3){
		printf("Enter base1 and exp1\n");
    	scanf("%lf %lf", &base1, &exp1);

    	printf("Enter exp2\n");
    	scanf("%lf", &exp2);

    	return(pow(base1, exp1*exp2));
	}
	else if (operation == 4){
		printf("Enter base1 and exp1\n");
    	scanf("%lf %lf", &base1, &exp1);

   	 if(exp1 == 0)
	 	return(1);
   	 else
    	return(pow(base1, exp1));
	}
	else if (operation == 5){
		printf("Enter base1 and exp1\n");
   		scanf("%lf %lf", &base1, &exp1);

    	if(exp1 < 0)
     	return(1 / pow(base1, (-1)*exp1));
	}
}
int main(){
	printf("%lf", ft_expo());
}