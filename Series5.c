//        index (i): 1    2    3    4    5 ... n
// Series-1: total = 1! + 2! + 3! + 4! + 5! + ... n terms  (term = 2 * i - 1)

#include <stdio.h>
int main(void) {
	int i, j, n, fact, total = 0;
	printf("\nPlease enter the number of term of the series: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		fact = 1;
		for (j = 1; j <= i; j++) {
			fact *= j;
		}
		total += fact;
		printf("\nSo i = %d, term = %d and total = %d...", i, fact, total);
	}
	
	printf ("\n\nSo the final sum of the series is %d...", total);
	printf ("\nEnd of the program...");
}
