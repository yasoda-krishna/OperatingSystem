/*
* Author : Yasoda Krishna Reddy Annapureddy
* IT483 Fall 2023
* Program 0
* Question 3
*/

#include "sorted_list.h"
#include <stdio.h>

int main()
{
  list_t *l;
printf("created head\n");
  init_sortedList(l);
// list_t *l;
//   l = NULL;
//  printf("intidata %p\t  ",&l->data);
  printf("initialized the list\n");
  printf("The Initial size of sorted list is %d\n ", size_sortedList(l));
  //printf("test : %p\n",&l);
 printf("started insertion\n");
   insertValue_sortedList(l,55);
   //printf("%d\n",l->data);
  insertValue_sortedList(l,65);
  insertValue_sortedList(l,22);
  insertValue_sortedList(l,21);
printf("inserted 4 nodes\n");
  printf("Size after insertion of integers is %d\n", size_sortedList(l));


  printf("The smallest value in the list is %d\n", remove_smallestValue_sortedList(l));

  free_sortedList(l);

  return 0;
}
