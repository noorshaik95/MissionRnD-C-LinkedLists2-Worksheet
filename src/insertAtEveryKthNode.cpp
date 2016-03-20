/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * insertAtEveryKthNode(struct node *head, int K) {
	struct node *temp = NULL, *temp1 = NULL, *curr = NULL;
	int count = 1;
	if (K <= 0 || head == NULL)
		return NULL;
	temp = head;
	temp1 = head;
	while (temp != NULL)
	{
		temp1 = temp;
		temp = temp->next;
		if (count%K == 0)
		{
			curr = (struct node *)malloc(sizeof(struct node));
			curr->num = K;
			curr->next = temp;
			temp1->next = curr;
		}
		count++;
	}
	return head;
}
