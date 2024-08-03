/*
Spiral Fill Up:
---------------
Fill up a square matrix with dimension nxn (where n is one user given integer) with numbers
ranging from 1 to n*n using them once in an anti-clockwise spiral manner starting from top-left
corner of the matrix. As example -
------------------------------------------------------------------------------------------
Algorithm:
----------
row = 0, col = 0
for i = 1 to n*n
	arr[row][col] = i
	update row and col
end for
display arr
end
------------------------------------------------------------------------------------------
n = 5 (user given integer)  r => row number, c => col number
      0   1   2   3   4     rr and cc => Increment/Decrement factors along row/col respectively
--------------------------    rr  cc    rr and cc can hold values 0, 1, -1
 0 |  1  16  15  14  13     ----------  r = r + rr and c = c + cc
 1 |  2  17  24  23  12        1   0    tt = rr
 2 |  3  18  25  22  11        0   1    rr = -cc
 3 |  4  19  20  21  10       -1   0    cc = tt
 4 |  5   6   7   8   9        0  -1    1. if (c == n)  Col Limit check
--------------------------  ----------  2. if (r == n)  Row Limit check
                               1   0    3. if (r == -1) Col Limit check
                                        4. if (arr[r][c] != 0)  Pre-Occupied check
------------------------------------------------------------------------------------------
*/

#include <stdio.h>
int arr[20][20];
int main(void) {
	int r, c, rr, cc, tt, i, n, tr, tc;
	printf("\n\nPlease enter the dimension number of the array: ");
	scanf("%d", &n);
	printf("\n\nInitializing the content of the array...");
	r = 0; c = 0; rr = 1; cc = 0;
	for (i = 1; i <= n*n; i++) {
		arr[r][c] = i;
		tr = r + rr; tc = c + cc;
		if (tc == n || tr == n || tr == -1 || arr[tr][tc] != 0) {
			tt = rr; rr = -cc; cc = tt;
		}
		r = r + rr; c = c + cc;
	}
	printf("\n\nDisplaying the current content of the array...\n");
	for (r = 0; r < n; r++) {
		for(c = 0; c < n; c++) {
			printf("%5d", arr[r][c]);
		}
		printf("\n");
	}
	printf("\n\nEnd of the program...");
}

