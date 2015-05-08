#include <stdio.h>

int main(void){

	int x = 12;

	int * ptr = &x;

	printf("The address of x:%x\n", ptr);
	printf("The address of x:%x\n", &x);
	printf("The address of ptr:%x\n", &ptr);
	printf("The value of x:%d\n", *ptr);
	printf("The value of x:%d\n", x);

	*ptr = 50;

	printf("The value of x:%d\n", *ptr);




	return 0;
}
