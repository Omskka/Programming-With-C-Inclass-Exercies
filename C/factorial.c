#include<stdio.h>  
int main()    
{    
 int i=1,number;
 int fact = 1; 
 printf("Enter a number: ");    
  scanf("%d",&number); 
 while (i <= number){
	fact = fact *i;
	i++;
 }   
    
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
}   
