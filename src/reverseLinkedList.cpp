/*
OVERVIEW: Given a single linked list, reverse the linked list.
E.g.: 1->2->3->4->5, output is 5->4->3->2->1.

INPUTS: A linked list.

OUTPUT: Reverse the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * reverseLinkedList(struct node *head) {
	struct node *temp1 = NULL, *temp2 = NULL, *temp3 = NULL;
	temp1 = head;
	if (head==NULL)
		return NULL;
	while (temp1 != NULL)
	{
		temp3 = temp2;
		temp2 = temp1;
		temp1 = temp1->next;
		temp2->next = temp3;
	}
	return temp2;
}
