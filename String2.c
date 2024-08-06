#include <stdio.h>
#include <string.h>
int main(void) {
	//            0123456789
	char str[] = "university";
	int i;
	void my_str_display(char *);
	int my_str_strlen(char *);
	
	printf("\nThe length of the string is %d...", my_str_strlen(str));
	my_str_display(str);
	
	printf("\n\nEnd of the program...");
}

int my_str_len(char *st) {
	.....
}
void my_str_display(char *st) {
	int i;
	printf("\nThe string is %s...", st);
	
	printf("\nThe string is ");
	i = 0;
	while (*(st + i) != '\x0') {
		printf("%c", *(st + i));
		i++;
	}
	printf("...");
}
