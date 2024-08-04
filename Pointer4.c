#include <stdio.h>
#include <stdio.h>

int main(void) {
	int i = 100;
	int *ptr;
	
	ptr = &i;
	printf("\n&i = %x, i = %d, ptr = %x and *ptr = %d...", &i, i, ptr, *ptr);
	
	if ((ptr = (int *)malloc(sizeof(int) * 10)) == NULL) {
		printf ("\nCan not allocate memory buffer...");
		exit(0);
	}
	
	*ptr = 200;
	printf("\nptr = %x and *ptr = %d...", ptr, *ptr);
	
	printf("\n\nEnd of the program...");
}
