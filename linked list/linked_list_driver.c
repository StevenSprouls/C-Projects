/*––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––*/
/*                                                            */
/*                                                            */
/*  This program tests the functions to insert and delete     */
/*  items in a linked list.                                   */

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"


int main(void)
{
   /*  Declare variables and function prototypes.  */
   int k=0, old, value;
   struct node *head, *next, *previous, *nw,                
          **ptr_to_head=&head;
   

   /*  Generate and print a linked list with five nodes.  */
   head = (struct node *)malloc(sizeof(struct node));
   next = head;
   for (k=1; k<=5; k++)
   {
      next->data = k*5;
      next->link = (struct node *)malloc(sizeof(struct node));
      previous = next;
      next = next->link;
   }
   previous->link = NULL;
   print_list(head);

   /*  Allow user to insert or delete nodes in the list.  */
   while (k != 2)
   {
      printf("Enter 0 to delete node, 1 to add node, 2 to quit. \n");
      scanf("%d",&k);
      if (k == 0)
      {
         printf("Enter data value to delete: \n");
         scanf("%d",&old);
         delete(ptr_to_head,old);
         print_list(head);
      }
      else
         if (k == 1)
         {
            printf("Enter data value to add: \n");
            scanf("%d",&value);
            nw = (struct node *)malloc(sizeof(struct node));
            nw->data = value;
            nw->link = NULL;
            insert(ptr_to_head,nw);
            print_list(head);
         }
    }

   /*  Exit program.  */
   return 0;
}
