#include <stdio.h>
int main(void) {
	//            0123456789
	char str[] = "university";
	int i;
	
	printf("\nThe string is %s...", str);
	for (i = 0; i <= 10; i++) {
		printf("\nCharacter at the %dth place is %c...", i, str[i]);
	}
	
	*(str + 6) = '\x0';
	printf("\nThe string is %s...", str);
	
	printf("\n\nEnd of the program...");
}
