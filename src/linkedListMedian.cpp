/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	int i, *arr, median, count = 0;
	struct node *temp;
	if (head==NULL)
		return -1;
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		count++;
	}
	arr = (int *)malloc(sizeof(int)*(count+1));
	for (i = 0;head!=NULL; i++)
	{
		*(arr + i) = head->num;
		head = head->next;
	}
	if (count % 2 == 0)
	{
		count = count / 2;
		median = *(arr + count);
		return median;
	}
	else
		median = (*(arr +(count / 2)) + *(arr + ((count / 2) + 1)))/2;
	return median;
}
