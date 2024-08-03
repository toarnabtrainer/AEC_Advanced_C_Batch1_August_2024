/*
Array Fill up:
maxloc = 5
	        col
	   0   1   2   3   4
--------------------------
r 0 |  1   2   3   4   5  => 0 + (col + 1)
o 1 |  6   7   8   9  10  => 5 + (col + 1)
w 2 | 11  12  13  14  15  => 10 + (col + 1) => row * maxloc + (col + 1)
  3 | 16  17  18  19  20  => 15 + (col + 1)
  4 | 21  22  23  24  25  => 20 + (col + 1)
--------------------------
*/
#include <stdio.h>
int main(void) {
	int arr[5][5], row, col, maxloc = 5;
	printf("\nInitializing the content of the array...");
	for (row=0; row<maxloc; row++) {
		for (col=0; col<maxloc; col++) {
			arr[row][col] = row * maxloc + (col + 1);
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
