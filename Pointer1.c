/*
int *ptr means ptr is a variable which holds as address and content of that address is an interger quantity.
float *ptr means ptr is a variable which holds as address and content of that address is a float quantity.
char *ptr means ptr is a variable which holds as address and content of that address is a char quantity.
*/

#include <stdio.h>
#include <conio.h>

int main(void) {
	int i = 100;
	int *ptr;
	
	ptr = &i;
	
	printf("\n&i = %d, i = %d, &ptr = %d, ptr = %d and *ptr = %d...", &i,i,&ptr,ptr,*ptr);
	printf("\n&i = %x, i = %d, &ptr = %d, ptr = %x and *ptr = %d...", &i,i,&ptr,ptr,*ptr);
	
	printf("\n\nEnd of the program...");
}
