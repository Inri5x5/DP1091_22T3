#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100

typedef struct date Date;

struct date{
    int day;
    int month;
    int year;
};

typedef struct pet Pet;

struct pet{
    char name[MAX_LEN];
    Date dob;
    char breed[MAX_LEN];  
};


int main(void){
    Pet p;
    strcpy(p.name,"Boris");
    p.dob.day = 1;
    p.dob.month = 4;
    p.dob.year = 1988;
    strcpy(p.breed,"dog");
    
    
    return EXIT_SUCCESS;
}
