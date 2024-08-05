// dealing with structure array

#include <stdio.h>
struct person {
		int age;
		int sal;
	};
	
int main(void) {
	struct person p[5];
	int i;
	
	printf("\n\nEnter your inputs: ");
	for (i = 0; i< 5; i++) {
		printf("\nPlease enter the age of the person: ");
		scanf("%d", &p[i].age);
		printf("Please enter the salary of the person: ");
		scanf("%d", &p[i].sal);
	}
	
	printf("\nDisplaying user inputs...");
	for (i = 0; i < 5; i++) {
		printf("\nSo the age = %d and salary = %d...", p[i].age, p[i].sal);
	}
	
	printf("\n\nSizeof(p) = %d, Sizeof(p[0].age) = %d, Sizeof(p[0].sal) = %d...", sizeof(p), sizeof(p[0].age), sizeof(p[0].sal));
	
	printf("\n\nEnd of the program...");
}
