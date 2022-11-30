#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 20

void create_word(char *word){
	int i;

	for (i = 0; i < SIZE; i++)
		word[i] = (rand()%26 + 97);

	for (i = 0; i < SIZE; i++)
		printf("%c", word[i]);
}

int find_char(char *word, char input){
	for (int i = 0; i < SIZE; i++){
		if(word[i] == input)
			return (i);
	}

}

int main(void){
	char word[SIZE];
	char input = 'g';
	srand(time(NULL));
	create_word(word);
	printf("\n%c found at: %d\n", input, find_char(word, input));
	return 0;
}