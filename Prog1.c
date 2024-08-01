#include <stdio.h>
// #include <conio.h>
int main(void) {
	int num1, num2, total;
	int my_input(void);
	int my_addition(int, int);
	void my_display(int, int, int);
	void my_exit(void);
	void my_welcome(void);
	
	my_welcome();
	num1 = my_input();
	num2 = my_input();
	total = my_addition(num1, num2);
	my_display(num1, num2, total);
	my_exit();
}

void my_welcome(void) {
	printf("Welcome to the World of Programming...\n");
}

int my_input(void) {
	int number;
	printf("\nPlease enter an integer number: ");
	scanf("%d", &number);
	return number;
}
int my_addition(int n1, int n2) {
	printf("\nPerforming the addition operation...");
	return (n1 + n2);
}
void my_display(int a, int b, int tot) {
	printf("\nDisplaying the result...");
	printf("\nSo %d + %d = %d...", a, b, tot);
}
void my_exit(void) {
	printf("\n\nEnd of the program...");
}
