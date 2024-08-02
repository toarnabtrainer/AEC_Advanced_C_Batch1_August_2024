//        index (i): 1   2   3   4   5   ... n
// Series-1: total = 1 + 3 + 5 + 7 + 9 + ... n terms  (term = 2 * i - 1)

#include <stdio.h>
int main(void) {
	int i, n, total = 0;
	printf("\nPlease enter the number of term of the series: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		total += 2 * i - 1;
		printf("\nSo i = %d, term = %d and total = %d...", i, (2 * i - 1), total);
	}
	
	printf ("\n\nSo the final sum of the series is %d...", total);
	printf ("\nEnd of the program...");
}
