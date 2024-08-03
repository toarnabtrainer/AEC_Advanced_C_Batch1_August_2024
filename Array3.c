/*
Array Fill up:
maxloc = 5
	        col
	   0   1   2   3   4     row   col
--------------------------  -----------
r 0 | 10   0   0   0  40       0     4
o 1 |  0  10   0  40   0       1     3  col => (maxloc - row - 1)
w 2 |  0   0  50   0   0       2     2
  3 |  0  40   0  10   0       3     1
  4 | 40   0   0   0  10       4     0
--------------------------  ------------
*/
#include <stdio.h>
int arr[5][5];
int main(void) {
	int row, col, maxloc = 5;
	printf("\nInitializing the content of the array...");
	for (row=0; row<maxloc; row++) {
		arr[row][row] = 10;
		arr[row][maxloc - row - 1] += 40;
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
