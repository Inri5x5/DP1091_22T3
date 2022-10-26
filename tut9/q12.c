// HAVE NOT BEEN IMPLEMENTED YET

#include <stdio.h>
#include <stdlib.h>

// The function insert_ordered is used to construct ordered lists. 
// It will insert the supplied value at the appropriate point in the list remains sorted 
// (non-decreasing).

struct node {
    int data;
    struct node * next;
};

// My function
struct node *insert_at_the_end(struct node *head, int value[], int length);
void print_list(struct node *head);

// To-Do Function
struct node *insert_ordered(int item, struct node *list);

int main () {
    struct node* list1 = NULL;
    int value_1[] = {1, 2, 3};
    list1 = insert_at_the_end(list1, value_1, 3);
    print_list(list1);

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



