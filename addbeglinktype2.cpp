#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
};


struct node* add_beg(struct node **head,int d){
	struct node *ptr = NULL;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->data = d;
	ptr->next = NULL;
	
	ptr->next = *head;
	*head = ptr;
	
}



int main()
{
	struct node* head = NULL;
	struct node* ptr = NULL;
	
	
	head   = (struct node*)malloc(sizeof(struct node));
	ptr    = (struct node*)malloc(sizeof(struct node));
	
	
	
	head->data = 1;
	head->next = ptr;
	
	ptr->data = 2;
	ptr->next = NULL;
	
	int data=3;
	add_beg(&head,data);
	ptr = head;
	while(ptr!=NULL){
		printf("%d",ptr->data);
		ptr = ptr->next;
	}
		
	return 0;
		
}
