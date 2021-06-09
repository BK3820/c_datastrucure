#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node*next;
};

void count_nodes(struct Node *head)
{
	int count = 0;
	if(head == NULL)
		printf("the list is empty");
	struct Node *ptr = NULL;
	ptr = head;
	while(ptr != NULL){
		count++;
		ptr = ptr->next;
	}
	
	printf("%d",count);	
}

int main()
{
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	
	head   = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third  = (struct Node*)malloc(sizeof(struct Node));
	
	
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	count_nodes(head);
		
	return 0;
}




