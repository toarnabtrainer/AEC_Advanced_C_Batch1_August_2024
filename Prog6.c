#include <stdio.h>

int main(void) {
	int choice, num1, num2, result;
	int my_input();  // returns user given input
	int my_menu();   // menu returns 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, 5 for quit
	int my_calculation(int, int, int); // input parameters are num1, num2, choice
	void my_display_result(int);  // result will be passed for display
	void my_exit();
	
	num1 = my_input();
	num2 = my_input();
	
	choice = 0;
	while (choice != 5) {
		choice = my_menu();
		if (choice == 4 && num2 == 0) {    // remember division  by zero is illegal
			printf("Division by ZERO is Illegal !!!");
		} else if (choice == 5) {
			my_exit();
		} else {
			result = my_calculation(num1, num2, choice);
			my_display_result(result);
		}
	}
}

void my_exit(void) {
	printf("\nEnd of the program...");
}

int my_menu() {
	int ch;
	printf("\nMAIN MENU...");
	printf("------------");
	printf("\n1> ADDITION OPERATION...");
	printf("\n2> SUBTRACTION OPERATION...");
	printf("\n3> MULTIPLICATION OPERATION...");
	printf("\n4> DIVISION OPERATION...");
	printf("\n5> QUIT OPERATION...");
	
	printf("\nPlease enter your choice number: ");
	scanf("%d", &ch);
	
	return ch;
}

int my_input() {
	int user_input;
	printf("\nPlease enter an integer value: ");
	scanf("%d", &user_input);
	return user_input;
}

void my_display_result(res) {
	printf("\nSo the calculated value is %d...", res);
}

int my_calculation(int n1, int n2, int ch) {
	if (ch == 1) {
		printf("\nPerforming the ADDITION Operation...");
		return n1 + n2;
	}	if (ch == 2) {
		printf("\nPerforming the SUBTRACTION Operation...");
		return n1 - n2;
	}	if (ch == 3) {
		printf("\nPerforming the MULTIPLICATION Operation...");
		return n1 * n2;
	}	if (ch == 4) {
		printf("\nPerforming the DIVISION Operation...");
		return n1 / n2;
	}	if (ch == 5) {
		printf("\nPerforming the EXIT Operation...");
		return n1 + n2;
	}
}




