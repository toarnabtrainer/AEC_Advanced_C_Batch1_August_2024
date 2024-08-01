/* using global variables */
#include <stdio.h>
int num1, num2, total;   /* using global variables */
int main(void) {
	void my_input(int);
	void my_addition(void);
	void my_display(void);
	void my_exit(void);
	void my_welcome(void);
	
	my_welcome();
	my_input(1);
	my_input(2);
	my_addition();
	my_display();
	my_exit();
}

void my_welcome(void) {
	printf("Welcome to the World of Programming...\n");
}

void my_input(int turn) {
	int number;
	printf("\nPlease enter an integer number: ");
	if (turn == 1) scanf("%d", &num1);
	else scanf("%d", &num2);
}

void my_addition(void) {
	printf("\nPerforming the addition operation...");
	total = num1 + num2;
}
void my_display(void) {
	printf("\nDisplaying the result...");
	printf("\nSo %d + %d = %d...", num1, num2, total);
}
void my_exit(void) {
	printf("\n\nEnd of the program...");
}
