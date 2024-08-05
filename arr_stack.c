/*
Stack Implementation using Array:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Stack is FILO or LIFO Data Structure

Index =>   0   1   2   3   4   5   6   7       TOP   Maxstack Operation
-----------------------------------------------------------------------------------
Stack                                          -1    8        [Stack is EMPTY]
Stack      11  67  89                           2             PUSH 11, PUSH 67, PUSH 89
Stack      11  67  89  76  23  41  55  72       7             PUSH 76, PUSH 23, PUSH 41, PUSH 55, PUSH 72
Stack      11  67  89  76  23  41  55  72       7             PUSH 100 (OVERFLOW)
Stack      11  67  89  76  23                   4             POP (55), POP (41)                        
Stack      11  67                               4             POP (23), POP (76), POP (89)
Stack                                          -1             POP (67), POP (11)
Stack                                          -1             POP (UNDERFLOW)
-----------------------------------------------------------------------------------

algorithm stack_push(stack, top, maxstack, item)
	if (top == maxstack - 1) then
		print("OVERFLOW")
		exit
	end if
	top = top + 1
	stack[top] = item
	
algorithm stack_pop(stack, top)
	if (top == -1) then
		print("UNDERFLOW")
		exit
	end if
	item = stack[top]
	top = top - 1
*/

#include <stdio.h>

int main(void) {
	int stack[10], max_stack, choice, top;
	int stack_menu(void);
	void stack_push(int [], int *, int);
	void stack_pop(int [], int *);
	void stack_display(const int [], int, int);
	void stack_exit(void);
	
	max_stack = 10;
	choice = 0;
	top = -1;
	
	while (choice != 4) {
		choice = stack_menu();
		switch(choice) {
			case 1:                 // PUSH Operation
				stack_push(stack, &top, max_stack);
				break;
			case 2:                 // POP Operation
				stack_pop(stack, &top);
				break;
			case 3:                 // DISPLAY Operation
				stack_display(stack, top, max_stack);
				break;
			case 4:                 // EXIT Operation
				stack_exit();
				break;
		}
	}
	
	printf("\n\nEnd of the program...");
}

int stack_menu(void) {
	int ch = 0;
	
	while (ch < 1 || ch > 4) {
		printf("\n\nM A I N  M E N U ...");
		printf("\n~~~~~~~~~~~~~~~~~~~~");
		printf("\n1 >  P U S H  O P E R A T I O N ...");
		printf("\n2 >  P O P  O P E R A T I O N ...");
		printf("\n3 >  D I S P L A Y  O P E R A T I O N ...");
		printf("\n4 >  E X I T  O P E R A T I O N ...");
		printf("\n\nPlease enter your choice number (1 to 4): ");
		scanf("%d", &ch);
	}
	return ch;
}

void stack_push(int stk[], int *tp, int maxstk) {
	printf("\n\nPUSH Operaton has been selected...");
	
	printf("\n\nPUSH Operation has been completed successfully...");
}

void stack_pop(int stk[], int *tp) {
	printf("\n\nPOP Operaton has been selected...");
	
	printf("\n\nPOP Operation has been completed successfully...");
}

void stack_display(const int stk[], int tp, int maxstk) {
	printf("\n\nDISPLAY Operaton has been selected...");
	
	printf("\n\nDISPLAY Operation has been completed successfully...");	
}

void stack_exit(void) {
	printf("\n\nEXIT Operation has been selected...");
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

