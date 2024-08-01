#include <stdio.h>
int main(void) {
	int my_input1(void);
	int my_input2(void);
	int my_addition(int, int);
	void my_display(int);
	void my_exit(void);
	void my_welcome(void);
	
	my_welcome();
	my_display(my_addition(my_input1(), my_input2()));
	my_exit();
}

void my_welcome(void) {
	printf("Welcome to the World of Programming...\n");
}

int my_input1(void) {
	int number;
	printf("\nPlease enter the first integer number: ");
	scanf("%d", &number);
	return number;
}
int my_input2(void) {
	int number;
	printf("\nPlease enter the second integer number: ");
	scanf("%d", &number);
	return number;
}
int my_addition(int n1, int n2) {
	printf("\nPerforming the addition operation...");
	return (n1 + n2);
}
void my_display(int tot) {
	printf("\nDisplaying the result...");
	printf("\nSo total = %d...", tot);
}
void my_exit(void) {
	printf("\n\nEnd of the program...");
}
