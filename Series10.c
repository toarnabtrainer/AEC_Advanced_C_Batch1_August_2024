// index -> 1   2   3   4   5   6   7   ... n
//  total = 4 + 7 + 4 + 7 + 4 + 7 + 4 + ... n terms
#include <stdio.h>
#include <math.h>
int main(void) {
	int i, total = 0, term, n;
	printf("\nPlease enter the number of terms: ");
	scanf("%d", &n);
	term = 4;
	for(i = 1; i <= n; i++) {
		total = total + term;
		printf("\nIndex i = %d, term = %d and total = %d...", i, term, total);
		term = term ^ 3;
		// term = term + ((i % 2 == 0)? -3: 3); 
		// term = (i % 2 == 0)? 4: 7;
		// term = (term % 2 == 0)? 7: 4;
		// term = 28 / term;
		// term = 11 - term;
		// term = (term == 4)? 7: 4;
		// if (term == 4) term = 7; else term = 4;
	}
	printf("\n\nSo the final sum is %d...", total);
	printf("\nEnd of the program...");
}

/*
XOR (Exclusive OR)
a  b  a xor b              4 => 1 0 0
-------------               xor 0 1 1 (3)
0  0  0                        -------
0  1  1                    7 => 1 1 1
1  0  1
1  1  0
-------------
Boolean Identities:
a xor 0 = a
a xor 1 = a'
a xor a = 0
a xor a' = 1
*/








