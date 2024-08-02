/*
n = 11 (User ODD i/p)  m = (n + 1) / 2 = (11 + 1) / 2 = 6   sp => Start Position
                                                            ep => Enp Position
      1  2  3  4  5  6  7  8  9  10 11      i   sp  ep
---------------------------------------   --------------
 1 |  1  1  1  1  1  1  1  1  1  1  1       1   1   11       (n, i, m)
 2 |  1  2  2  2  2  2  2  2  2  2  1       2   2   10  sp => i
 3 |  1  2  3  3  3  3  3  3  3  2  1       3   3   9
 4 |  1  2  3  4  4  4  4  4  3  2  1       4   4   8   ep => (n + 1 - i)
 5 |  1  2  3  4  5  5  5  4  3  2  1       5   5   7
 6 |  1  2  3  4  5  6  5  4  3  2  1     __6___6___6__
 7 |  1  2  3  4  5  5  5  4  3  2  1       7   5   7
 8 |  1  2  3  4  4  4  4  4  3  2  1       8   4   8   sp => (n + 1 - i)
 9 |  1  2  3  3  3  3  3  3  3  2  1       9   3   9
10 |  1  2  2  2  2  2  2  2  2  2  1      10   2   10  ep => i
11 |  1  1  1  1  1  1  1  1  1  1  1      11   1   11
---------------------------------------   --------------
*/
#include <stdio.h>
int main(void) {
	int n, i, m, j, start_no, sp, ep;
	while (1) {
		printf("\nPlease enter the ODD number of layers: ");
		scanf("%d", &n);
		if (n % 2 == 1) break;
	}
	m = (n + 1) / 2;
	for (i = 1; i <= n; i ++) {
		if (i <= m) {sp = i; ep = (n + 1 - i);}
		else {sp = (n + 1 - i); ep = i;}
		start_no = 0;
		for (j = 1; j <= n; j++) {
			if (j <= sp) start_no++;
			else if (j > ep) start_no--;
			printf("%3d", start_no);
		}
		printf("\n");
	}
	
	printf("\n\nEnd of the program...");
}
