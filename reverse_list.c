#include<stdio.h>
#include<stdlib.h>

//declaring the struct for the linked list
typedef struct linkedList{
    int data;
    linkedList *next;
};
// function to print the list in  reverse
void reverseList(linkedList **head_ref){
        linkedList *prev, *curr, *next;
        // initialising pointers
        prev = NULL;
        curr = *head_ref;
        next = NULL;
        while(curr != NULL){
            //store the node
            next = curr->next;
            // reverse the node
            curr->next = prev;
            //swapping position moing one step ahead
            prev = curr;
            curr = next;
        }
        // after reverse set prev node to refrerence node
            *head_ref = prev;
}