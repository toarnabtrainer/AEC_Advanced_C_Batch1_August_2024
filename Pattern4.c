/*
n = 6  (User i/p)    i    .    *
                  ----------------
ABCDEFGHIJK          1    0   11        (n, i)
.ABCDEFGHI           2    1    9   . => (i - 1)
..ABCDEFG            3    2    7
...ABCDE             4    3    5   * => (2 * (n - i) + 1)
....ABC              5    4    3
.....A               6    5    1
                  ----------------
                   Tracing Table
*/
                   
#include <stdio.h>
int main(void) {
	int i,j,n;
	printf("\nPlease enter the number of layers: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= (i - 1); j++) printf(".");
		for (j = 1; j <= (2 * (n - i) + 1); j++) printf(????);
		printf("\n");
	}
	printf("\n\nEnd of the program...");
}
