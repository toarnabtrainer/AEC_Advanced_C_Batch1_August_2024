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
	
	printf("\n\nEnd of the program...");
}
