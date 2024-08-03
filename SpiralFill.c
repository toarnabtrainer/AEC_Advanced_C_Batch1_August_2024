/*
Spiral Fill Up:
---------------
Fill up a square matrix with dimension nxn (where n is one user given integer) with numbers
ranging from 1 to n*n using them once in a clockwise spiral manner starting from top-left
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
 0 |  1   2   3   4   5     ----------  r = r + rr and c = c + cc
 1 | 16  17  18  19   6        0   1    tt = rr
 2 | 15  24  25  20   7        1   0    rr = cc
 3 | 14  23  22  21   8        0  -1    cc = -tt
 4 | 13  12  11  10   9       -1   0    1. if (c == n)  Col Limit check
--------------------------  ----------  2. if (r == n)  Row Limit check
                               0   1    3. if (c == -1) Col Limit check
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
	r = 0; c = 0; rr = 0; cc = 1;
	for (i = 1; i <= n*n; i++) {
		arr[r][c] = i;
		tr = r + rr; tc = c + cc;
		if (tc == n || tr == n || tc == -1 || arr[tr][tc] != 0) {
			tt = rr; rr = cc; cc = -tt;
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









