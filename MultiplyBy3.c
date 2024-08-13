/*
HOMEWORK:
---------
Find out all possible such numbers which when multiplied by 3 then in the product
the first digit of the source number will come at the last and all other digits
in the product will maintain the same sequence as they were in the source number.

Here, user will not give any input. When we shall execute our program then such
numbers will be found and will get printed.

As example:
	
	Source number:  xy ... z
	                     * 3
	                --------
	                y ... zx
	                
Find out all possible such numbers.
                     1 0 2 1 2
                     1 4 2 8 5 7
                             * 3
                    ------------
                     4 2 8 5 7 1
--------------------------------------------------------------------------------
*/
#include <stdio.h>
int main(void) {
	int require_digit[10] = {0, 7, 4, 1, 8, 5, 2, 9, 6, 3};
	int result[10];
	int i, digit, position, first_digit, carry, current_digit, flag;
	for(first_digit = 1; first_digit <= 3; first_digit++) {
		// result = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		current_digit = first_digit;
		carry = 0; position = 0, flag = 0;
		while (flag == 0) {
			digit = require_digit[current_digit - carry];
			result[position] = digit;
			carry = (digit * 3) / 10;
			if (digit == first_digit)
				break;
			for(i = 0; i < position && flag == 0; i++)
				if(digit == result[i]) flag = 1;
			current_digit = digit;
			position++;
		}
		if (digit == first_digit) {
			printf("\nThe number is ");
			for(i = position; i >= 0; i--) printf("%2d", result[i]);
		}
	}
}


















