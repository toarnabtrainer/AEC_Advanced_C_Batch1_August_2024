/*
n = 6  (User i/p)    i    .    *
                  ----------------
.....*               1    5    1        (n, i)
....***              2    4    3   . => (n - i)
...*****             3    3    5
..*******            4    2    7   * => (2 * i - 1)
.*********           5    1    9
***********          6    0   11
                  ----------------
                   Tracing Table
*/
                   
#include <stdio.h>
int main(void) {
	int i,j,n;
	printf("\nPlease enter the number of layers: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= (n - i); j++) printf(".");
		for (j = 1; j <= (2 * i - 1); j++) printf("*");
		printf("\n");
	}
	printf("\n\nEnd of the program...");
}
