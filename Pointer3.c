#include <stdio.h>
#include <conio.h>
int main(void) {
	int a, b, total, diff, prod, quot;
	void update_call_by_value(int, int);
	void update_call_by_reference(int *, int *);
	void my_calculations(int, int, int *, int *, int *, int *);
	
	a = 200; b = 60;
	
	printf("\n\nPerforming different calculations...");
	my_calculations(a, b, &total, &diff, &prod, &quot);
	printf("\nFor %d and %d, calculated values are %d, %d, %d, %d...", a, b, total, diff, prod, quot);
	
	printf("\n\nIn main() &a = %x, a = %d, &b = %x and b = %d...", &a, a, &b, b);
	update_call_by_value(a, b);
	printf("\nIn main() &a = %x, a = %d, &b = %x and b = %d...", &a, a, &b, b);
	
	printf("\n\nIn main() &a = %x, a = %d, &b = %x and b = %d...", &a, a, &b, b);
	update_call_by_reference(&a, &b);   // passing address as a value (call by reference is the common name)
	printf("\nIn main() &a = %x, a = %d, &b = %x and b = %d...", &a, a, &b, b);
	
	printf("\n\nEnd of the program...\n");
}

void my_calculations(int x, int y, int *tt, int *dd, int *pp, int *qq) {	
    printf("\nPerforming multiple calculations...");
	*tt = x + y;
	*dd = x - y;
	*pp = x * y;
	*qq = x / y;
}

void update_call_by_value(int x, int y) {
	printf("\nIn call_by_value current &x = %x, x = %d, &y = %x, y = %d...", &x, x, &y, y);
	x = 111; y = 222;
	printf("\nIn call_by_value current &x = %x, x = %d, &y = %x, y = %d...", &x, x, &y, y);
}

void update_call_by_reference(int *x, int *y) {
	printf("\nIn call_by_reference current x = %x, *x = %d, y = %x, *y = %d...", x, *x, y, *y);
	*x = 333; *y = 444;
	printf("\nIn call_by_reference current x = %x, *x = %d, y = %x, *y = %d...", x, *x, y, *y);
}
