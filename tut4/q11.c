#include <stdio.h>

struct customer {
    int customerID;
    double salary;
};

typedef struct customer Customer;

int main(void) { 
	
    int num_array[15];

    Customer people[15];
    people[1].customerID = 123456;
    people[4].salary = 70000.500;

    printf("Id of the second person is %d\n", people[1].customerID);

	return 0;
}