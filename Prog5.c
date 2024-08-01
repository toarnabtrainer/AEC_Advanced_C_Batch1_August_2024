#include <stdio.h>
#include "myheader.h"
int main(void) {
	int num1, num2, total;
	
	my_welcome();
	num1 = my_input();
	num2 = my_input();
	total = my_addition(num1, num2);
	my_display(num1, num2, total);
	my_exit();
}

