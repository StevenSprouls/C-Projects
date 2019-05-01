/*  Define structure to represent a node in a linked list.*/
struct node
{
   int data;
   struct node *link;
};


/*-------------------------------------------------------------*/
/*  This function returns a value of one if the linked list    */
/*  is empty.                                                  */

int empty(struct node *head);



/*-------------------------------------------------------------*/
/*  This function prints a linked list.                        */

void print_list(struct node *head);



/*-------------------------------------------------------------*/
/*  This function inserts a new node in a linked list.         */

void insert(struct node **ptr_to_head, struct node *nw);



/*------------------------------------------------------------*/
/*  This function deletes a node form a linked list.          */

void delete(struct node **ptr_to_head, int old);
