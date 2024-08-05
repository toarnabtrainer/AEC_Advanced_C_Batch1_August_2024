// structure in structure
#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int dd;
	int *mm;
	int yy;
} date;
typedef struct {
	int age;
	int *sal;
	date *doj;
} person;
int main(void) {
	person *p;
	void person_input(person **);
	void person_display(person);
	
	if ((p = (person *)malloc(sizeof(person))) == NULL) {
		printf("\nNo space found to allocate buffer...");
		exit(0);
	}
	if ((p->sal = (int *)malloc(sizeof(int))) == NULL) {
		printf("\nNo space found to allocate buffer...");
		exit(0);
	}
	if ((p->doj = (date *)malloc(sizeof(date))) == NULL) {
		printf("\nNo space found to allocate buffer...");
		exit(0);
	}
	if ((p->doj->mm = (int *)malloc(sizeof(int))) == NULL) {
		printf("\nNo space found to allocate buffer...");
		exit(0);
	}
	
	person_input(&p);      // example of call by reference
	person_display(*p);     // example of call by value

	printf("\n\nEnd of the program...");
}
void person_input(person **pp) {
	printf("\n\nEnter your inputs: ");
	printf("\nPlease enter the age of the person: ");
	scanf("%d", &(*pp)->age);
	printf("Please enter the salary of the person: ");
	scanf("%d", (*pp)->sal);
	printf("Please enter the date of joining of the person: ");
	scanf("%d", &(*pp)->doj->dd);
	printf("Please enter the month of joining of the person: ");
	scanf("%d", (*pp)->doj->mm);
	printf("Please enter the year of joining of the person: ");
	scanf("%d", &(*pp)->doj->yy);
}
void person_display(person ppp) {
	printf("\nDisplaying user inputs...");
	printf("\nSo the age = %d and salary = %d...", ppp.age, *ppp.sal);
	printf("\nSo the date of joining is %d/%d/%d...", ppp.doj->dd, *ppp.doj->mm, ppp.doj->yy);
}





