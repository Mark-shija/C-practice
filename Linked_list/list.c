#include <stdio.h>
#include <stdlib.h>

/**
 * creating a singly linked list to store numbers
 */

struct node{
	int number;
	struct node *link;
};

int main()
{
	/* Create pointer head that access the first node of the list */

	struct node *head = malloc(sizeof(struct node));
	head -> number = 10; /* Assign value to member */
	head -> link = NULL; /* the link to first node is initially null */ 

	struct node *neck = malloc(sizeof(struct node));

	neck -> number = 20;
	neck -> link = NULL;
	head -> link = neck;

	struct node *chest = malloc(sizeof(struct node));
	
	chest -> number = 30;
	chest -> link = NULL;
	neck -> link = chest;
/* addinng new node to the beggining of the list */

	struct node *ptr = malloc(sizeof(struct node));
	ptr -> number = 100;
	ptr -> link = head;


	if (head != NULL)
	{
		printf("%d %d %d %d\n", ptr -> number, head -> number, neck -> number, chest -> number);
	}
	else
	{
		printf("The Linked list failed to be created\n");
	}

	return (0);
}
