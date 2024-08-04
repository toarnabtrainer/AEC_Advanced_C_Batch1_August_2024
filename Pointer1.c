/*
int *ptr means ptr is a variable which holds an address and content of that address is an interger quantity.
float *ptr means ptr is a variable which holds an address and content of that address is a float quantity.
char *ptr means ptr is a variable which holds an address and content of that address is a char quantity.
*/

#include <stdio.h>
#include <conio.h>

int main(void) {
	int i = 0x100;
	int *ptr;
	
	ptr = &i;
	
	printf("\n&i = %d, i = %d, &ptr = %d, ptr = %d and *ptr = %d...", &i, i, &ptr, ptr, *ptr);
	printf("\n&i = %x, i = %d, &ptr = %x, ptr = %x and *ptr = %d...", &i, i, &ptr, ptr, *ptr);
	printf("\n&i = %X, i = %d, &ptr = %X, ptr = %X and *ptr = %d...", &i, i, &ptr, ptr, *ptr);
	
	printf("\n\nSizeof int = %d, size of *ptr = %d, size of ptr = %d", sizeof(int), sizeof(*ptr), sizeof(ptr));
	printf("\n\nptr = %x...", ptr);
	ptr++;
	printf("\nptr = %x...", ptr);
	++ptr;
	printf("\nptr = %x...", ptr);
	ptr = ptr + 1;
	printf("\nptr = %x...", ptr);
	ptr += 1;
	printf("\nptr = %x...", ptr);
	ptr += 100;
	printf("\nptr = %x...", ptr);
			
	printf("\n\nEnd of the program...");
}

/*
100 = 96 + 4 = 6x16^1 + 4x16^0 = 64H
400 = 256 + 144 = 1x16^2 + 9x16^1 + 0x16^0 = 190H

       1                     111 
   62fe2cH      62fe2c       abcd9
 +     64H         190     + efdd6
   -------      ------       -----
   62fe90H      62ffbc      19baaf
   22      112
   ABC     7056
   DFF     1455
   E6A     7729
   ---     ----
  2725H   20464
*/














