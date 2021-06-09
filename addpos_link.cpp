#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
};

struct node *add_any(struct node*head, int data,int pos){
	
	struct node*ptr = head;
	struct node*ptr2 = NULL;
	ptr2 = (struct node*)malloc(sizeof(struct node));
	ptr2->data = data;
	ptr2->next = NULL;
	
	pos--;
	while(pos!=1){
		
		ptr = ptr->next;
		pos--;
	}
	
	ptr2->next = ptr->next;
	ptr->next  = ptr2;
	
	
	
}

int main()
{
	struct node* head = NULL;
	struct node* second = NULL;
	struct node* third = NULL;
	
	head   = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third  = (struct node*)malloc(sizeof(struct node));
	
	
	
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	int data = 67 , pos = 3;
	add_any(head,  data,  pos);
	
	struct node*ptr = head;
	
	while(ptr!=NULL){
		printf("%d",ptr->data);
		ptr = ptr->next;
	}
	
	
		
	return 0;
	
		
}
