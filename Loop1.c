#include <stdio.h>
int main(void) {
	int day, medi, medicount;
	printf("\nVisit Doctor...");     // 1 time
	for (day = 1; day <= 5; day++) {
		printf("\nGood Morning...");     // 5 times
		for(medi = 1; medi <= 3; medi++) {
			printf("\nDay No. - %d and Medicine No. - %d...", day, medi);     // 15 times
		}
		printf("\nGood Night...");     // 5 times
		printf("\n--------------------------------------------");     // 5 times
	}
	printf("\nThanks to Doctor...");     // 1 time
	printf("\nSo the total number medicines consumed is %d...", medicount);
	printf("\n\nEnd of the program...");     // 1 time
}
