#include <stdio.h>

int main(void) {
	int num1, num2;
	int my_input(void);
	void my_addition(int, int);
	void my_exit(void);
	void my_welcome(void);
	
	my_welcome();
	num1 = my_input();
	num2 = my_input();
	my_addition(num1, num2);
	my_exit();
}

void my_welcome(void) {
	printf("Welcome to the World of Programming...\n");
}
void my_exit(void) {
	printf("\n\nEnd of the program...");
}
void my_display(int a, int b, int tot) {
	printf("\nDisplaying the result...");
	printf("\nSo %d + %d = %d...", a, b, tot);
	my_exit();
}
int my_input(void) {
	int number;
	printf("\nPlease enter an integer number: ");
	scanf("%d", &number);
	return number;
}
void my_addition(int n1, int n2) {
	printf("\nPerforming the addition operation...");
	my_display(n1, n2, n1 + n2);
}

