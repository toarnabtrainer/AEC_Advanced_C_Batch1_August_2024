#include <stdio.h>
#include <conio.h>
/*
            44   12
300 = 256 + 32 +  8 + 4 = 0000 0000 0000 0000 0000 0001 0010 1100
                          --------- --------- --------- ---------
                           Byte-3    Byte-2    Byte-1     Byte-0
                            (0)       (0)       (1)        (44)
                            4003      4002      4001       4000
              26   10
1050 = 1024 + 16 +  8 + 2 = 0000 0000 0000 0000 0000 0100 0001 1010
                            --------- --------- --------- ---------
                                (0)      (0)       (4)       (26)
*/
int main(void) {
	int i = 1050;
	char *ptr;
	
	ptr = (char *)&i;
	
	printf("\n\n&i = %x, i = %d...", &i, i);
	printf("\nptr = %x, *ptr = %d...", ptr, *ptr);
	printf("\n(ptr + 1) = %x, *(ptr + 1) = %d...", (ptr + 1), *(ptr + 1));
	printf("\n(ptr + 2) = %x, *(ptr + 2) = %d...", (ptr + 2), *(ptr + 2));
	printf("\n(ptr + 3) = %x, *(ptr + 3) = %d...", (ptr + 3), *(ptr + 3));
	
	printf("\n\nptr = %x...", ptr);
	ptr++;
	printf("\nptr = %x...", ptr);
	++ptr;
	printf("\nptr = %x...", ptr);
	ptr = ptr + 1;
	printf("\nptr = %x...", ptr);
	ptr += 1;
	printf("\nptr = %x...", ptr);
			
	printf("\n\nEnd of the program...");
}













