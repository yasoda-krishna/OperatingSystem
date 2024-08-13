/*
* Author : Yasoda Krishna Reddy Annapureddy
* IT483 Fall 2023
* Program 0
* Question 3
*/
#include "sorted_list.h"
#include <stdlib.h>
#include <stdio.h>

void init_sortedList(list_t *l)
{
  l = NULL;
}

int size_sortedList(list_t *l)
{
  int count=0;
  list_t *temp = l;
  //printf("yes\t");
  while(temp!=NULL)
  {printf("%d\n",temp->data);
    count++;
    temp=temp->next;
  }
  return count;
}


void insertValue_sortedList(list_t *l,int newValue)
{
  //printf("%p\n",&l);
  list_t *node =(list_t *) malloc(sizeof(list_t));
  node -> data = newValue;
  node -> next = NULL;
printf("created new node\n");
  if(l == NULL )
  {
    printf("reassigned started\n");
    l=node;
        printf("reassigned ended\n");
  }
  else if(l->data > newValue)
  {
    printf("bymistake\n");
    node-> next = l;
    l = node;
  }
  else{
    printf("bymistake\n");
    list_t *temp = l;
    while((temp->next!=NULL)  && (temp->next->data < newValue))
    {
      temp = temp -> next;
    }
    node ->next  = temp->next;
    temp->next = node;

  }

}

int remove_smallestValue_sortedList(list_t *l)
{
  if(l==NULL)
  {
    return -999;
  }
  else{
    list_t *temp = l;

    l = l ->next;
    int temp_Data = temp->data;
    free(temp);
    return temp_Data;
  }
  return 0;
// }
//
// void free_sortedList(list_t *l)
// {
//   while(l!=NULL)
//   {
//     list_t *temp = l;
//     l= l->next;
//     free(temp);
//   }
// }
