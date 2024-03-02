#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
#define int char

int main(void)
{
    int i;

    i = 5;
    printf ("sizeof(i) = %lu", sizeof(i));
    return (EXIT_SUCCESS);
}



=======

struct node
{
	int data;
	struct node *link;
};

void count_of_nodes(struct node *head)
{
	int count = 0;

	if (head == NULL)
	{
		printf("The node is empty\n");
	}
	struct node *ptr = NULL;

	ptr = head;

	while (ptr != NULL)
	{
		count ++;
		ptr = ptr -> link;
	}

	printf("%d \n", count);
}

int main(void)
{
	struct node *head = NULL;
	head = (struct node *)malloc(sizeof(struct node));

	head->data = 45;
	head->link = NULL;

	struct node *current = malloc(sizeof(struct node));

	current->data = 98;
	current->link = NULL;
	head->link = current;

	current = malloc(sizeof(struct node));
	current -> data = 3;
	current -> link = NULL;
	head -> link -> link = current;

	count_of_nodes(head);

	return (0);
}
>>>>>>> 4917bdaab6aaf2d09fa863c419a781a577b48b22
