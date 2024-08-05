#include <stdio.h>
struct person {
	int age;
	int sal;
};	
int main(void) {
	struct person p;
	struct person person_input(void);
	void person_display(struct person);
	
	p = person_input();
	person_display(p);

	printf("\n\nEnd of the program...");
}
struct person person_input(void) {
	struct person pp;
	
	printf("\n\nEnter your inputs: ");
	printf("\nPlease enter the age of the person: ");
	scanf("%d", &pp.age);
	printf("Please enter the salary of the person: ");
	scanf("%d", &pp.sal);
	
	return pp;
}
void person_display(struct person ppp) {
	printf("\nDisplaying user inputs...");
	printf("\nSo the age = %d and salary = %d...", ppp.age, ppp.sal);
}





