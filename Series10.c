// index -> 1   2   3   4   5   6   7   ... n
//  total = 4 + 7 + 4 + 7 + 4 + 7 + 4 + ... n terms
#include <stdio.h>
int main(void) {
	int i, total = 0, term, n;
	printf("\nPlease enter the number of terms: ");
	scanf("%d", &n);
	term = 4;
	for(i = 1; i <= n; i++) {
		total = total + term;
		printf("\nIndex i = %d, term = %d and total = %d...", i, term, total);
		term = ???
		// if (term == 4) term = 7; else term = 4;
	}
	printf("\n\nSo the final sum is %d...", total);
	printf("\nEnd of the program...");
}
