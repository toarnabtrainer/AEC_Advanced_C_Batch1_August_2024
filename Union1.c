#include <stdio.h>

union my_record {
	char gender;
	int age;
};

int main(void) {
	union my_record rec;
	
	rec.gender = 'M';
	printf("\nGender of the employee is %c...", rec.gender);
	rec.age = 55;
	printf("\nAge of the employee is %d...", rec.age);
	printf("\nGender of the employee is %c...", rec.gender);
	rec.gender = 'M';
	printf("\nAge of the employee is %d...", rec.age);
	
	printf("\n\nEnd of the program...");
}

/*
4 Bytes =>    0000 0000 0000 0000 0000 0000 0000 0000
              --------- --------- --------- ---------
              Byte-3    Byte-2    Byte-1    Byte-0
Gender='M' = 77 = 64 + 8 + 4 + 1 =                             0100 1101 (77)
Age = 55 = 32 + 16 + 4 + 2 + 1 = 0000 0000 0000 0000 0000 0000 0011 0111 (55) => '7'
                                 --------- --------- --------- ---------
                                 Byte-3    Byte-2    Byte-1    Byte-0
*/
















