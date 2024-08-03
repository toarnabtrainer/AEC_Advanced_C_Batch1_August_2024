/*
Array Fill up:
maxloc = 5
	        col
	   0   1   2   3   4 
--------------------------
r 0 |  1   2   3   4   5
o 1 |  2   2   3   4   5
w 2 |  3   3   3   4   5
  3 |  4   4   4   4   5
  4 |  5   5   5   5   5
--------------------------
*/
#include <stdio.h>
int arr[5][5];
int main(void) {
	int row, col, maxloc = 5;
	printf("\nInitializing the content of the array...");
	for (row=0; row<maxloc; row++) {
		for(col=0; col<maxloc; col++) {
			arr[row][col] = 1 + ((row > col)? row: col);
		}
	}
	printf("\n\nDisplaying the content of the array...\n");
	for (row=0; row<maxloc; row++) {
		for (col=0; col<maxloc; col++) {
			printf("%5d", arr[row][col]);
		}
		printf("\n");
	}
	printf("\n\nEnd of the program...");
}
