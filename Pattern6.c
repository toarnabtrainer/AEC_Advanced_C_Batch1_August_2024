/*
n = 11  (ODD i/p)    i    .    *     m = (11 + 1)/2 = (n + 1)/2 = 6
                  ----------------
***********          1    0   11        (n, i, m)
.*********           2    1    9   . => (i - 1)
..*******            3    2    7
...*****             4    3    5   * => (2 * (m - i) + 1)
....***              5    4    3
.....*             __6____5____1__
....***              7    4    3
...*****             8    3    5   . => (n - i)
..*******            9    2    7
.*********          10    1    9   * => (2 * (i - m) + 1)
***********         11    0   11 
                  ----------------
                   Tracing Table
*/
                   
#include <stdio.h>
int main(void) {
	int i,j,n,m,s,b;
	while (1) {
		printf("\nPlease enter the ODD number of layers: ");
		scanf("%d", &n);
		if (n % 2 == 1) break;
	}
	m = (n + 1) / 2;
	for (i = 1; i <= n; i++) {
		if (i <= m) {
			b = (i - 1);
			s = (2 * (m - i) + 1);
		} else {
			b = (n - i);
			s = (2 * (i - m) + 1);
		}
		for (j = 1; j <= b; j++) printf(".");
		for (j = 1; j <= s; j++) printf("*");
		printf("\n");
	}
	printf("\n\nEnd of the program...");
}
