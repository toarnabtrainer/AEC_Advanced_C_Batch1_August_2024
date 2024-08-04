#include <stdio.h>

int main(void) {
	int arr[10];
	void array_initialize(int []);
	void array_display(int []);
	
	array_initialize(arr);
	array_display(arr);
	
	printf("\n\nEnd of the program...");
}

void array_display(int y[]) {
	int j;
	printf("\n\nDisplaying the current content of the array...");
	for (j = 0; j < 10; j++) {
		printf("\nLocation number: %4d and Content: %4d...", j, y[j]);
	}
}

void array_initialize(int x[]) {
	int i;
	printf("\nInitializing the current content of the array...");
	for(i = 0; i < 10; i++) {
		x[i] = (i + 1) * 100 + 1;
	}
}


