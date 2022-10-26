#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Implement a function set_intersection which given two linked lists in strictly increasing order
// returns a new linked list containing a copy of the elements found in both lists.

// The new linked list should also be in strictly increasing order.
// It should include only elements found in both lists.
// set_intersection should call malloc to create the nodes of the new linked list.

// [1] -> [4] -> [5] -> [13] -> [14] -> [15] 
// [2] -> [3] -> [4] -> [5] -> [15]
// return [4] -> [5] -> [15]


struct node {
    int data;
    struct node * next;
};

// My function
struct node *insert_at_the_end(struct node *head, int value[], int length);
void print_list(struct node *head);
struct node *create_node(int data);

// To-Do Function
struct node *set_intersection(struct node *set1, struct node *set2);

int main () {
    struct node* list1 = NULL;
    int value_1[] = {1, 4, 5, 13, 14, 15};
    list1 = insert_at_the_end(list1, value_1, 6);
    print_list(list1);

    struct node* list2 = NULL;
    int value_2[] = {2, 3, 4, 5, 15};
    list2 = insert_at_the_end(list2, value_2, 5);
    print_list(list2);

    struct node* return_val = set_intersection(list1, list2);
    print_list(return_val);

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

// creates a struct node with the given data value
// returns a pointer to this node
struct node *create_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}

struct node *set_intersection(struct node *set1, struct node *set2) {
    struct node *set1_temp = set1;
    struct node *set2_temp = set2;

    struct node *returned_head = NULL;

    while (set1_temp != NULL && set2_temp != NULL) {
        if (set1_temp->data < set2_temp->data) {
            set1_temp = set1_temp->next;
        } else if (set1_temp->data > set2_temp->data) {
            set2_temp = set2_temp->next;
        } else if (set1_temp->data == set2_temp->data) {
            struct node *new_node = create_node(set1_temp->data);
            if (returned_head == NULL) {
                returned_head = new_node;
            } else {
                struct node* curr = returned_head;
                while (curr->next != NULL) {
                    curr = curr->next;
                }
                curr->next = new_node;
            }
            set1_temp = set1_temp->next;
            set2_temp = set2_temp->next;
        }
    }
    
    return returned_head;
}