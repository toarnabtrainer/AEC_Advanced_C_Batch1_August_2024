// dealing with structure array

#include <stdio.h>
#include <stdlib.h>
struct person {
		int age;
		int sal;
	};
	
int main(void) {
	struct person *p;
	struct person * person_input(void);
	void person_display(struct person []);
	
	p = person_input();
	person_display(p);
	
	printf("\n\nEnd of the program...");
}
struct person * person_input(void) {
	int i;
	struct person *pp;
	if ((pp = malloc(sizeof(struct person) * 5)) == NULL) {
		printf("\n\nCan not allocate buffer...");
		exit(0);
	}
	printf("\n\nEnter your inputs: ");
	for (i = 0; i< 5; i++) {
		printf("\nPlease enter the age of the person: ");
		scanf("%d", &pp[i].age);
		printf("Please enter the salary of the person: ");
		scanf("%d", &pp[i].sal);
	}
	return pp;
}
void person_display(struct person ppp[]) {
	int i;
	printf("\nDisplaying user inputs...");
	for (i = 0; i < 5; i++) {
		printf("\nSo the age = %d and salary = %d...", ppp[i].age, ppp[i].sal);
	}
}
