#include <stdio.h>
#include <stdlib.h>

// Implement a function identical that returns 1 
// if the contents of the two linked lists are identical 
// (same length, same values in data fields) 
// and otherwise returns 0.

// [1] -> [2] -> [3] 
// [1] -> [2] -> [4]
// return 0 (different)

struct node {
    int data;
    struct node * next;
};

// My function
struct node *insert_at_the_end(struct node *head, int value[], int length);
void print_list(struct node *head);

// To-Do Function
int identical(struct node *head1, struct node *head2);

int main () {
    struct node* list1 = NULL;
    int value_1[] = {1, 2, 3};
    list1 = insert_at_the_end(list1, value_1, 3);
    print_list(list1);

    struct node* list2 = NULL;
    int value_2[] = {1, 2};
    list2 = insert_at_the_end(list2, value_2, 2);
    print_list(list2);

    printf("The returned value: %d\n", identical(list1, list2));

    return 0;
}


// Create a struct and append the given value at the end
struct node *insert_at_the_end(struct node *head, int value[], int length) {
    for (int i = 0; i < length; i++) {
        struct node *n = malloc(sizeof(struct node));
        n->data = value[i];
        n->next = NULL;

        if (head == NULL) {
            head = n;
        } else {
            struct node *curr = head;
            while (curr->next != NULL) {
                curr = curr->next;
            }
            curr->next = n;
        }
    }
    return head;
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

int identical(struct node *head1, struct node *head2) {
    struct node* h1_temp = head1;
    struct node* h2_temp = head2;

    while(h1_temp != NULL && h2_temp != NULL) {
        if (h1_temp->data != h2_temp->data) {
            return 0; //its is different
        } else {
            h1_temp = h1_temp->next;
            h2_temp = h2_temp->next;
        }
    }
    if (h1_temp == NULL && h2_temp == NULL) {
        return 1; //it is the same
    } else {
        return 0; // it is different becaoz it has different length
    }
}