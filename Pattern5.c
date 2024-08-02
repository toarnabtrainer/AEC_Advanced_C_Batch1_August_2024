/*
n = 11 (ODD i/p)     i    .    *   m = (11 + 1)/2 = (n + 1)/2 = 6
                  ----------------
.....*               1    5    1        (n, i, m)
....***              2    4    3   . => (m - i)
...*****             3    3    5
..*******            4    2    7   * => (2 * i - 1)
.*********           5    1    9
***********        __6____0___11__
.*********           7    1    9
..*******            8    2    7   . => (i - m)
...*****             9    3    5
....***             10    4    3   * => (2 * (n - i) + 1)
.....*              11    5    1
                  ----------------
                   Tracing Table
*/
                   
#include <stdio.h>
int main(void) {
	int i,j,n,m,s,b;
	printf("\nPlease enter the ODD number of layers: ");
	scanf("%d", &n);
	m = (n + 1) / 2;
	for (i = 1; i <= n; i++) {
		if (i <= m) {
			b = (m - i);
			s = (2 * i - 1);
		} else {
			b = (i - m);
			s = (2 * (n - i) + 1);
		}
		for (j = 1; j <= b; j++) printf(".");
		for (j = 1; j <= s; j++) printf("*");
		printf("\n");
	}
	printf("\n\nEnd of the program...");
}
