#include <stdio.h>
#include <string.h>
int main(void) {
	//            0123456789
	char str[] = "unIVERsiTy";
	int i;
	void my_str_display(char *);
	int my_str_strlen(char *);
	char *my_str_strupr(char *);
	char *my_str_strlwr(char *);
	
	printf("\nThe length of the string is %d...", my_str_strlen(str));
	my_str_display(str);
	printf("\n\nThe string in the upper case is %s...", my_str_strupr(str));
	printf("\n\nThe string in the upper case is %s...", my_str_strlwr(str));
	my_str_display(str);
	printf("\nOutcome of comparing two string is %d...", strcmp("amit", "amit"));
	printf("\nOutcome of comparing two string is %d...", strcmp("amitava", "amit"));
	printf("\nOutcome of comparing two string is %d...", strcmp("amit", "amitava"));
	printf("\nOutcome of comparing two string is %d...", strcmp("Amit", "amit"));
	printf("\nOutcome of comparing two string is %d...", strcmp("amit", "kamal"));
	
	printf("\n\nEnd of the program...");
}
/*
ASCII Codes: American Standard Code for Information Interchange Codes
8 bit codes: ranging from 0 to 255 (2^8 - 1)
Two categories:
	1. Standard ASCII Codes (Printable): 0 to 127
	2. Extended ASCII Codes (Non-Printable): 128 to 255 (Used as control characters)
	0 -> NULL, Tab -> 8, Bach Space -> 9, Space -> 32, Enter -> 13 (Carriage Return (CR))
	A -> 65, B -> 66, ..., Z -> 90
	a -> 97, b -> 98, ..., z -> 122
	0 -> 48, 1 -> 49, ..., 9 -> 57
*/
char * my_str_strlwr(char *st) {
	int i = 0;
	char ch;
	while (*(st + i) != '\x0') {
		ch = *(st + i);
		if (ch >= 'A' && ch <= 'Z') {
			*(st + i) = ch + 32;
		}
		i++;
	}
	return st;
}
char * my_str_strupr(char *st) {
	int i = 0;
	char ch;
	while (*(st + i) != '\x0') {
		ch = *(st + i);
		if (ch >= 'a' && ch <= 'z') {
			*(st + i) = ch - 32;
		}
		i++;
	}
	return st;
}
int my_str_strlen(char *st) {
	int i = 0;
	while (*(st + i) != '\x0') {
		i++;
	}
	return i;
}
void my_str_display(char *st) {
	int i;
	// printf("\nThe string is %s...", st);
	
	printf("\nThe string is ");
	i = 0;
	while (*(st + i) != '\x0') {
		printf("%c", *(st + i));
		i++;
	}
	printf("...");
}
