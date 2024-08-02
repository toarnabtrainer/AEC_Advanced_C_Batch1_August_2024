/*
ASCII Codes (American Standard Code for Information Interchange)
8 bit numbers => 0 to 255
Category-1: Normal ASCII Codes - 0 to 127 (Printable)
Category-2: Extended ASCII Codes - 128 to 255 (Non-Printable)
A => 65, B => 66, ..., Z => 90
a => 97, b => 98, ..., z => 122
0 => 48, 1 => 49, ..., 9 => 57
Esc => 27, Tab => 8, Back Space => 9, Space/Blank => 32, Enter => 13

n = 6  (User i/p)  ch   i    .    *
                  -------------------
.....A             65   1    5    1        (n, i)
....BBB            66   2    4    3   . => (n - i)
...CCCCC           67   3    3    5
..DDDDDDD          68   4    2    7   * => (2 * i - 1)
.EEEEEEEEE         69   5    1    9
FFFFFFFFFFF        70   6    0   11   ch => 64 + i
                  -------------------
                   Tracing Table
*/
                   
#include <stdio.h>
int main(void) {
	int i,j,n;
	printf("\nPlease enter the number of layers: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= (n - i); j++) printf(".");
		for (j = 1; j <= (2 * i - 1); j++) printf("%c", 64 + i);
		printf("\n");
	}
	printf("\n\nEnd of the program...");
}
