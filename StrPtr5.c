#include <stdio.h>
struct person {
		int age;
		int sal;
	};	
int main(void) {
	struct person p;
	void person_input(struct person *);
	void person_display(struct person);
	
	person_input(&p);      // example of call by reference
	person_display(p);     // example of call by value

	printf("\n\nEnd of the program...");
}
void person_input(struct person *pp) {
	printf("\n\nEnter your inputs: ");
	printf("\nPlease enter the age of the person: ");
	scanf("%d", &(*pp).age);
	printf("Please enter the salary of the person: ");
	scanf("%d", &pp->sal);
}
void person_display(struct person ppp) {
	printf("\nDisplaying user inputs...");
	printf("\nSo the age = %d and salary = %d...", ppp.age, ppp.sal);
}





