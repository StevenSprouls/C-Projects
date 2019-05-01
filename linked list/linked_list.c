#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int empty(struct node *head)
{
	int k = 0;
	if(head == 0)
		k = 1; /* if the list is empty, k = 1 should prompt the user to input new values */
	return k;
}

void print_list(struct node *head)
{
	if(empty(head))		/* is the list is empty, the user is prompted to enter new values or quit the program */
	{
		printf("Your list is empty. add values or quit. \n");
	}
	else			/* if it is not empty, the values in the list are printed out horizontally */
	{
		struct node *next;
		printf("your list is: ");
		next = head;
		while (next->link != 0)  /* while there is still another node in the list, the current value is printed */
		{
			printf("%d, ", next->data);
			next = next->link;
		}
		printf("%d ", next->data);  /* this prints the last value of the list, as it will not printed in the while loop as next->link will be null */
	}
}

void insert(struct node **ptr_to_head, struct node *nw)
{
	struct node **next;
	if (empty(*ptr_to_head))
		*ptr_to_head = nw; /* if there is no head the new value becomes the head */
   	else
   	{
      		next = ptr_to_head;
      		while (((*next)->data < nw->data) && ((*next)->link != 0)) /* inserts the new value and traverses the array to keep it ascending order */     
         		next = &(*next)->link;
         	if ((*next)->data < nw->data)
            		(*next)->link = nw;
         	else
         	{
            		nw->link = *next;
            		*next = nw;
         	}
   	}
 
} 

void delete(struct node **ptr_to_head, int old)
{
	struct node *head, *next, *previous, *nodeToBeDeleted;
	head = *ptr_to_head;	/* old is the value that the user wants to delete */
	if (head->data == old) /* if the first node is chosen to be deleted, it is set to nodeToBeDeleted, then the memory at that location is freed up */
	{
		nodeToBeDeleted = head;
         	*ptr_to_head = head->link;
         	free(nodeToBeDeleted);
      	}
      	else	/* if the first node is not deleted */
      	{
         	next = head->link;	
         	previous = head;
         	while ((next->data < old) && (next->link != 0))  /*if the selected node is somewhere is the middle of the list */
         	{
            		previous = next; /* the node before the selected node will take its position */
            		next = next->link; /*the node after the selected node will move up a position as well */
         	}
         	if (next->data == old) /*if the last node is deleted */
         	{
            		nodeToBeDeleted = next;
            		previous->link = next->link; /*the link before the deleted one takes its position */
            	free(nodeToBeDeleted);
         	}
         	else
            		printf("That value is not in the list \n");
      	}
}