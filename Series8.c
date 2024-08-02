//        index (i): 1    2    3    4    5 ... n
// Series-1: total = 2! + 4! + 6! + 8! + 10! + ... n terms
/*       i   curr fact   next fact   factors
       --------------------------------------
         1   2!          4!          3, 4
         2   4!          6!          5, 6
         3   6!          8!          7, 8
         ...
         i   i!          i! * (2 * i + 1) * (2 * i + 2)
       --------------------------------------
*/
#include <stdio.h>
int main(void) {
	int i, j, n, fact = 2, total = 0;
	printf("\nPlease enter the number of term of the series: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		total += fact;
		printf("\nSo i = %d, term = %d and total = %d...", i, fact, total);
		fact = fact * (2 * i + 1) * (2 * i + 2);
	}
	
	printf ("\n\nSo the final sum of the series is %d...", total);
	printf ("\nEnd of the program...");
}
