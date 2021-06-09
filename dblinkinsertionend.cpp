#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *prev;
	int data;
	struct node *next;
};

struct node* add_beg(struct node* head,int data){
	
	struct node *temp = NULL;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	temp->next = head;
	head->prev = temp;
	
	head = temp;
	return head;
}

struct node* add_pos(struct node* head,int data){
	
	struct node*tp =NULL;
	struct node*temp =NULL;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = data;
	temp->next = NULL;
	tp = head;
	while(tp->next != NULL)
	{
		tp = tp->next;
	} 
	
	tp->next = temp;
	temp->prev = tp;
	return head; 
}



int main()
{
	struct node *head = NULL;
	head = (struct node*)malloc(sizeof(struct node));
	head->prev = NULL;
	head->data = 30;
	head->next = NULL;
	
	struct node *second = NULL;
	second = (struct node*)malloc(sizeof(struct node));
	second->prev = head;
	second->data = 33;
	second->next = NULL;
	
	head->next = second;
	
	head = add_beg(head,45);
	
	head = add_pos(head,66);
	
	struct node*ptr = NULL;
	ptr = head;
	while (ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr = ptr->next;
	}
	return 0;
}
