#include <stdio.h>
#include <stdlib.h>

int * createArray(int size);

int main(){

	int values[10];
	int arvo = 12;
	values[10]= 2;
	//in principle should overwrite the values
	printf("int arvo should be 12 = %i  values[10] should be 2 = %i\n", arvo, values[10]);

	int * myArray = createArray(10);
	myArray[0] = 24;
	printf("myArray[0] is %i\n", myArray[0]);
	free(myArray);

	return 0;
}

int * createArray(int size){

	int * array = (int*)malloc(sizeof(int) * size); //malloc defaults to void, 
							//sizeof gives size of int in bytes
	return array;
}

