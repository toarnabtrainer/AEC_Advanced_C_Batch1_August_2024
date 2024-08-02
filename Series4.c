//        index (i): 1   2   3   4   5    6 ... n
// Series-1: total = 1 - 3 + 5 - 7 + 9 - 11 ... n terms  
// term = (i % 2 == 0)? -1: 1) * (2 * i - 1)
// term = (-1)^(i + 1) * (2 * i - 1) = (int)pow(-1, i + 1) * (2 * i - 1)

#include <stdio.h>
#include <math.h>
int main(void) {
	int i, n, total = 0, term;
	printf("\nPlease enter the number of term of the series: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		// term = ((i % 2 == 0)? -1: 1) * (2 * i - 1);
		term = (int)pow(-1, i + 1) * (2 * i - 1);
		total += term;
		printf("\nSo i = %d, term = %d and total = %d...", i, term, total);
	}
	
	printf ("\n\nSo the final sum of the series is %d...", total);
	printf ("\nEnd of the program...");
}
