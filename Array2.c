
Array Fill up:
maxloc = 5
	        col
	   0   1   2   3   4
--------------------------
r 0 |  1   6  11  16  21  
o 1 |  2   7  12  17  22  
w 2 |  3   8  13  18  23  
  3 |  4   9  14  19  24  
  4 |  5  10  15  20  25  
--------------------------
*/
#include <stdio.h>
int main(void) {
	int arr[5][5], row, col, maxloc = 5;
	printf("\nInitializing the content of the array...");
	for (row=0; row<maxloc; row++) {
		for (col=0; col<maxloc; col++) {
			arr[row][col] = ???
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
