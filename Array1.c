Array Fill up:
	
	  0   1   2   3   4
--------------------------
 0 |  1   2   3   4   5
 1 |  6   7   8   9  10 
 2 | 11  12  13  14  15 
 3 | 16  17  18  19  20
 4 | 21  22  23  24  25 
--------------------------

int void(main) {
	int arr[5][5]; row, col, maxloc = 5;
	printf("\nInitializing the content of the array...");
	for (row=0; row<maxloc; row++) {
		for (col=0; col<maxloc; col++) {
			arr[row][col] = ???
		}
	}
	printf("\n\nDisplaying the content of the array...");
	for (row=0; row<maxloc; row++) {
		for (col=0; col<maxloc; col++) {
			printf("%5d", arr[row][col]);
		}
		printf("\n");
	}
	printf("\n\nEnd of the program...");
}
