#include <stdio.h>
struct person {
	int age;
	int sal;
};
	
int main(void) {
	struct person p;
	
	printf("\n\nEnter your inputs: ");
	printf("\nPlease enter the age of the person: ");
	scanf("%d", &p.age);
	printf("Please enter the salary of the person: ");
	scanf("%d", &p.sal);
	
	printf("\nDisplaying user inputs...");
	printf("\nSo the age = %d and salary = %d...", p.age, p.sal);
	printf("\n\nSizeof(p) = %d, Sizeof(p.age) = %d, Sizeof(p.sal) = %d...", sizeof(p), sizeof(p.age), sizeof(p.sal));
	
	printf("\n\nEnd of the program...");
}
