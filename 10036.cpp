#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stud_node{
	int num;
	struct stud_node *next;
};
void Ptrint_Stu_Doc(struct stud_node *head);
int main()
{
	struct stud_node *L,*tail1,*tail2,*p1,*p2,*NEW;
	int num;
	int size=sizeof(struct stud_node);

	L=tail1=NULL;
	scanf("%d",&num);
	while(num!=-1){
		p1=(struct stud_node *)malloc(size);
		p1->num=num;
		p1->next=NULL;
		if(L==NULL)
		    L=p1;
		else
			tail1->next=p1;
		tail1=p1;
		scanf("%d",&num);
	}
	p1 = L;
	p2 = NULL;
	while (p1 != NULL) {
	    if ((p1->num & 0x1) == 1) {
	        if (p2 == NULL) {
	            NEW = p1;
	            p2 = NEW;
	        } else {
	            p2->next = p1;
	            p2 = p1;
	        }
	    }
	    p1 = p1->next;
	}
	p2->next = NULL;
	Ptrint_Stu_Doc(NEW);
	return 0;
}
void Ptrint_Stu_Doc(struct stud_node *head)
{
	struct stud_node *ptr;
	if(head==NULL){
		printf("No Records\n");
		return;
	}
	for(ptr=head;ptr;ptr=ptr->next)
		printf("%d ",ptr->num);
	printf("\n");
}
