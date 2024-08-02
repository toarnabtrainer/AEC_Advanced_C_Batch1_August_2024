//        index (i): 1   2   3   4    5   6   7   8   9   10   11  12   ... n
// Series-1: total = 1 + 2 + 3 + 4 + 10 + 5 + 6 + 7 + 8 + 26 + 9 + 10 + ... n terms
//                   ---------1--------   -------2----------   --3--------
// What will be the 99-th term of this series? 100 = 5 * 20 = (4 + 1) * 20 = 80 + 20

#include <stdio.h>
int main(void) {
	int final_sum,temp_sum,term,n,i;
	printf("\nPlease enter the number of terms of the series: ");
	scanf("%d", &n);
	term = 1; final_sum = 0, temp_sum = 0;
	for(i = 1; i <= n;i++) {
		if (i % 5 == 0) {
			final_sum = final_sum + temp_sum;
			printf("\nAddition of temp sum = %d to the final sum = %d...", temp_sum, final_sum);
			temp_sum = 0;
		} else {
			temp_sum += term;
			final_sum += term;
			printf("\nAdding term = %d to the final sum = %d...", term , final_sum);
			term++;
		}
	}
	printf("\n\nSo the final sum is %d...", final_sum);
	printf("\nEnd of the program...");
}
