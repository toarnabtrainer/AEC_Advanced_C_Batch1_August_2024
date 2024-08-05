#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int i, *ptr;
	
	printf("\nUsing malloc() function...");
	if ((ptr = (int *)malloc(sizeof(int) * 8)) == NULL) {
		printf ("\nCan not allocate memory buffer...");
		exit(0);
	}
	printf("\nDisplaying the memory buffer...");
	for(i = 0; i < 8; i++) {
		printf("\nLocation number %x and content %d...", ptr + i, *(ptr + i));
	}
	
	printf("\n\nUsing malloc() function...");
	if ((ptr = (int *)calloc(8, sizeof(int))) == NULL) {
		printf ("\nCan not allocate memory buffer...");
		exit(0);
	}
	printf("\nDisplaying the memory buffer...");
	for(i = 0; i < 8; i++) {
		printf("\nLocation number %x and content %d...", ptr + i, *(ptr + i));
	}
	
	printf("\nUpdating the memory buffer...");
	for(i = 0; i < 8; i++) {
		ptr[i] = (i + 1) * 100;
		printf("\nLocation number %x and content %d...", ptr + i, *(ptr + i));
	}
	printf("\nDisplaying the memory buffer...");
	for(i = 0; i < 8; i++) {
		printf("\nLocation number %x and content %d...", ptr + i, *(ptr + i));
	}
	
	printf("\n\nUsing realloc() function...");
	if ((ptr = (int *)realloc(ptr, 15)) == NULL) {
		printf ("\nCan not allocate memory buffer...");
		exit(0);
	}
	printf("\nDisplaying the memory buffer...");
	for(i = 0; i < 15; i++) {
		printf("\nLocation number %x and content %d...", ptr + i, *(ptr + i));
	}
	
	printf("\n\nEnd of the program...");
}
