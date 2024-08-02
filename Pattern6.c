/*
n = 11  (ODD i/p)    i    .    *     m = (11 + 1)/2 = (n + 1)/2 = 6
                  ----------------
***********          1    0   11        (n, i, m)
.*********           2    1    9   . => (???)
..*******            3    2    7
...*****             4    3    5   * => (???)
....***              5    4    3
.....*             __6____5____1__
....***              7    4    3
...*****             8    3    5   . => (???)
..*******            9    2    7
.*********          10    1    9   * => (???)
***********         11    0   11 
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
		for (j = 1; j <= (2 * (n - i) + 1); j++) printf("*");
		printf("\n");
	}
	printf("\n\nEnd of the program...");
}
