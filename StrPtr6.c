// structure in structure
#include <stdio.h>
struct date {
	int dd;
	int mm;
	int yy;
};
struct person {
	int age;
	int sal;
	struct date doj;
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
	printf("Please enter the date of joining of the person: ");
	scanf("%d", &pp->doj.dd);
	printf("Please enter the month of joining of the person: ");
	scanf("%d", &pp->doj.mm);
	printf("Please enter the year of joining of the person: ");
	scanf("%d", &pp->doj.yy);
}
void person_display(struct person ppp) {
	printf("\nDisplaying user inputs...");
	printf("\nSo the age = %d and salary = %d...", ppp.age, ppp.sal);
	printf("\nSo the date of joining is %d/%d/%d...", ppp.doj.dd, ppp.doj.mm, ppp.doj.yy);
}





