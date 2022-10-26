// HAVE NOT BEEN IMPLEMENTED YET

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Write a function strings_to_list which takes an array of pointers to strings 
// and converts it to a linked list.

// Assume the strings contain only digit characters,

// char *powers[] = {"2", "4", "8", 16"};
// struct node *head = strings_to_list(4, powers);
// return [2] -> [4] -> [8] -> [16]

struct node {
    int data;
    struct node * next;
};

// My function
void print_list(struct node *head);

// To-Do Function
struct node *strings_to_list(int len, char *strings[]);

int main () {
    char *powers[] = {"2", "4", "8", "16"};
    struct node *head = strings_to_list(4, powers);
    print_list(head);
    return 0;
}


// Print out the the linked list
void print_list(struct node *head) {
    printf("[");
    for (struct node *n = head; n != NULL; n = n->next) {
        printf("%d", n->data);
        if (n->next != NULL) {
            printf(" -> ");
        }
    }
    printf("]\n");
}

struct node *strings_to_list(int len, char *strings[]) {
    
}