#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void get_user_input() {
	printf("> ");
	
	char *input = (char *) malloc(100 * sizeof(char));

	scanf("%s", input);

	printf("%s", input);

}

int main() {
	get_user_input();
	return 0;
}