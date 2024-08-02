//        index (i): 1   2   3   4   5    6 ... n
// Series-1: total = 1 - 3 + 5 - 7 + 9 - 11 ... n terms  (term = ????)

#include <stdio.h>
int main(void) {
	int i, n, total = 0;
	printf("\nPlease enter the number of term of the series: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		total += ???;
		printf("\nSo i = %d, term = %d and total = %d...", i, ???, total);
	}
	
	printf ("\n\nSo the final sum of the series is %d...", total);
	printf ("\nEnd of the program...");
}
