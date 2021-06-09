#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node*next;
};

void add_end(struct Node *head,int data)
{
	struct Node *ptr, *temp;
	ptr = head;
	temp = (struct Node*)malloc(sizeof(struct Node));
	
	temp->data = data;
	temp->next = NULL;
		
	while(ptr->next != NULL){
		ptr = ptr->next;
	}
	
	ptr->next = temp;
		

}

int main()
{
	struct Node *head = NULL;
	struct Node *second = NULL;
	struct Node *third = NULL;
	
	head   = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third  = (struct Node*)malloc(sizeof(struct Node));
	
	
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	
	
	add_end(head,67);
		
	return 0;
}



