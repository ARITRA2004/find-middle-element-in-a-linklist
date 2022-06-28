//print the middle of a give link list
#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *link;
};
void condition (struct node *ptr)
{
  if(ptr==NULL)
  {
    printf ("memory overflow");
  }
  else
  {
    printf ("enter the value:");
    scanf("%d",&ptr->data);
    ptr->link = NULL;
  }
}
void find_middle_element(struct node *pre_ele , struct node *cur_ele)
{
  while(cur_ele != NULL)
    {
      pre_ele = cur_ele;
      cur_ele = cur_ele->link;
      printf("the middle element is %d:",pre_ele->data);
    }
}
typedef struct node NODE;
int main ()
{
  NODE *head , *new_node1 , *new_node2;
  head = (NODE *)malloc(sizeof(NODE)); //creat a node
  condition(head);
  head->link = new_node1;
  new_node1 = (NODE *)malloc(sizeof(NODE));
  condition(new_node1);
  new_node1->link = new_node2;
  new_node2 = (NODE *)malloc(sizeof(NODE));
  condition(new_node2);
  new_node2->link = NULL;
  find_middle_element(head, new_node1);
  return 0;
}
