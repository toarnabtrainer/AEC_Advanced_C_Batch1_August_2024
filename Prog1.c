#include <stdio.h>
// #include <conio.h>
int main(void) {
	int num1, num2, total;
	int input(void);
	int my_addition(int, int);
	
	num1 = my_input();
	num2 = my_input();
	total = my_addition(num1, num2);
	
	printf("\nSo %d + %d = %d...", num1, num2, total);
	
	printf("\n\nEnd of the program...");
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
