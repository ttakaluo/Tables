#include <stdio.h>

int main(void){

	int values[] = {1, 2, 3, 4, 5};
	int i;

	for(i = 0; i < 5; i++){
	printf("Value is: %i\n", (*values)++);
	} 

	return 0;
}
