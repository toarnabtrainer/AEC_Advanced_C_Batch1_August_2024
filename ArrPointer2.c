// menu-driven program on different array operations

#include <stdio.h>
int main(void) {
	int choice = 0, arr[10], maxloc = 10, n;
	int menu(void);
	void arr_create(int [], int *, int);
	void arr_insert(int [], int *, int);
	void arr_delete(int [], int *);
	void arr_search(const int [], int, int);
	void arr_sort(int [], int);
	void arr_display(const int [], int, int);
	void arr_exit();
	
	printf("\n\nDoing multiple operations on an ARRAY...");
	while(choice != 7) {
		choice = menu();
		switch(choice) {
			case 1:   // CREATE Operation
				arr_create(arr, &n, maxloc);
				break;
			case 2:   // INSERT Operation
				arr_insert(arr, &n, maxloc);
				break;
			case 3:   // DELETE Operation
				arr_delete(arr, &n);
				break;
			case 4:   // SORT Operation
				arr_sort(arr, n);
				break;
			case 5:   // SEARCH Operation
				arr_search(arr, n, maxloc);
				break;
			case 6:   // DISPLAY Operation
				arr_display(arr, n, maxloc);
				break;
			case 7:   // EXIT Operation
				arr_exit();
				break;

		}	
	}
}
void arr_create(int a[], int *nn, int maxl) {
	int i;
	printf("\n\nCREATE Operation has been selected...");
	*nn = 0;
	while (1) {
		printf("\nPlease enter number of values (less than 10): ");
		scanf("%d", nn);
		if (*nn >= 1 && *nn <= maxl) { break;}
		else {printf("\nPlease enter an integer less than %d...", maxl);
		}
	}
	printf("Now provide %d number of data items...\n", *nn);
	for(i = 0; i < *nn; i++) {
		printf("Enter number for location number %d: ", i);
		scanf("%d", &a[i]);
	}
	printf("\n\nCREATE Operation has been completed successfully...");
}
/*
n = 8, maxloc = 10, loc = 2

     Index =>   0   1   2   3   4   5   6   7   8   9
Data Items =>   4   2   9   1   7   6   3   5
                        ^
                        |
            new_item = 10        
   Target Location Range <-- Source Location Range
        (8 to 3)               (7 to 2)
      (n to loc + 1)           (n - 1 to loc)
    for i = n to (loc + 1) step -1   (here i is the target index)
        arr[i] = arr[i - 1]
    for i = (n - 1) to loc step -1   (here i is the source index)
        arr[i + 1] = arr[i]
*/
void arr_insert(int a[], int *nn, int maxl) {
	int new_item, loc, i;
	printf("\n\nINSERT Operation has been selected...");
	if (*nn == maxl) {
		printf("\nO V E R F L O W !!!");
		printf("\nNo Space for INSERT operation...");
	} else {
		printf("\nThere is a space for INSERT operation...");
		printf("\nPlease enter the location value for insertion: ");
		scanf("%d", &loc);
		printf("\nPlease enter the new data item value for insertion: ");
		scanf("%d", &new_item);
		for (i = (*nn) - 1; i >= loc; i--) {   // here i is the source index
	        a[i + 1] = a[i];
		}
		a[loc] = new_item;
		(*nn)++;
		printf("%d data item has been inserted to location %d...", new_item, loc);
	}
	
	printf("\n\nINSERT Operation has been completed successfully...");
}
/*
n = 8, maxloc = 10, loc = 2

     Index =>   0   1   2   3   4   5   6   7   8   9
Data Items =>   4   2   9   1   7   6   3   5
                        ^
                        |
            del_item =  9        
   Target Location Range <-- Source Location Range
        (2 to 6)               (3 to 7)
      (loc to n - 2)           (loc + 1 to n - 1)
    for i = loc to (n - 2)           (here i is the target index)
        arr[i] = arr[i + 1]
    for i = (loc + 1) to (n - 1)     (here i is the source index)
        arr[i - 1] = arr[i]
*/
void arr_delete(int a[], int *nn) {
	int del_item, loc, i;
	printf("\n\nDELETE Operation has been selected...");
	if (*nn == 0) {
		printf("\nU N D E R F L O W !!!");
		printf("\nNo data for DELETE operation...");
	} else {
		printf("\nThere is data for DELETE operation...");
		printf("\nPlease enter the location value for deletion: ");
		scanf("%d", &loc);
		del_item = a[loc];
		for (i = (loc + 1); i <= (*nn - 1); i++) {   // here i is the source index
	        a[i - 1] = a[i];
		}
		(*nn)--;
		printf("%d data item has been deleted from location %d...", del_item, loc);
	}	
	printf("\n\nDELETE Operation has been completed successfully...");
}
void arr_search(const int a[], int n, int maxl) {
	printf("\n\nSEARCH Operation has been selected...");
	
	printf("\n\nSEARCH Operation has been completed successfully...");
}
void arr_sort(int a[], int n) {
	printf("\n\nSORT Operation has been selected...");
	
	printf("\n\nSORT Operation has been completed successfully...");
}
void arr_display(const int a[], int n, int maxloc) {
	int i;
	printf("\n\nDISPLAY Operation has been selected...");
	if (n == maxloc) {
		printf("\nThe array is completely filled up...");
	}
	for (i = 0; i < n; i++) {
		printf("\nLocation No: %4d and Content: %4d...", i, a[i]);
	}
	printf("\n\nDISPLAY Operation has been completed successfully...");	
}
void arr_exit() {
	printf("\n\nEXIT Operation has been selected...");
	printf("\nEnd of the program...");
}
int menu(void) {
	int ch = 0;
	
	while (ch < 1 || ch > 7) {
		printf("\n\nM A I N  M E N U ...");
		printf("\n--------------------");
		printf("\n1 > C R E A T E  O P E R A T I O N ...");
		printf("\n2 > I N S E R T  O P E R A T I O N ...");
		printf("\n3 > D E L E T E  O P E R A T I O N ...");
		printf("\n4 > S O R T I N G  O P E R A T I O N ...");
		printf("\n5 > S E A R C H I N G  O P E R A T I O N ...");
		printf("\n6 > D I S P L A Y  O P E R A T I O N ...");
		printf("\n7 > E X I T  O P E R A T I O N ...");
		printf("\n\nPlease enter your choice no: ");
		scanf("%d", &ch);
	}
	
	return ch;
}
