#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot (Node*& head, Node*& smaller, Node*& larger, int pivot)
{
  //base case
  //empty list
  if(head == NULL)
  {
    smaller = NULL;
    larger = NULL;
    return;
  }

  //detach one node at a time
  Node* curr = head;
  head = head->next;

  llpivot(head, smaller, larger, pivot);
  if (curr->val <= pivot) {
    curr->next = smaller; //put the node at the begining of the list
    smaller = curr;
  } else {
    curr->next = larger;
    larger = curr;
  }

  head = NULL;
}


