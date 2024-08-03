
Array Fill up:
maxloc = 5
	        col
	   0   1   2   3   4
--------------------------
r 0 |  10  0   0   0  40  
o 1 |  0  10   0  40   0  
w 2 |  0   0  50   0   0  
  3 |  0  40   0  10   0  
  4 | 40   0   0   0  10  
--------------------------
*/
#include <stdio.h>
int main(void) {
	int arr[5][5], row, col, maxloc = 5;
	printf("\nInitializing the content of the array...");
	for (row=0; row<maxloc; row++) {
		for (col=0; col<maxloc; col++) {
			if (row == col) arr[row][col] = 10;
			else arr[row][col] = 0;
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
