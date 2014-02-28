#include<stdio.h>
#include<stdlib.h>
struct stud_node{
	int num;
	struct stud_node *next;
};
struct stud_node *Creat_Stu_Doc();
struct stud_node *DeleteDoc(struct stud_node *head);
void Ptrint_Stu_Doc(struct stud_node *head);
int main()
{
	struct stud_node *head;

	head=Creat_Stu_Doc();
	head=DeleteDoc(head);
	Ptrint_Stu_Doc(head);
	return 0;
}

struct stud_node *Creat_Stu_Doc()
{
	struct stud_node *head,*tail,*p;
	int num;
	int size=sizeof(struct stud_node);

	head=tail=NULL;
	scanf("%d",&num);
	while(num!=-1){
		p=(struct stud_node *)malloc(size);
		p->num=num;
		p->next=NULL;
		if(head==NULL)
			head=p;
		else
			tail->next=p;
		tail=p;
		scanf("%d",&num);
	}
	return head;
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

struct stud_node *DeleteDoc(struct stud_node *head) {
    struct stud_node* pre = NULL;
    struct stud_node* cur = head;
    while (cur != NULL) {
        if ((cur->num & 0x1) == 0) {
            if (pre != NULL) { /* remove common node */
                pre->next = cur->next;
                free(cur);
                cur = pre->next;
            } else { /* remvoe the first node (list head)*/
                head = cur->next;
                free(cur);
                cur = head;
            }
        } else {
            pre = cur;
            cur = cur->next;
        }
    }
    return head;
}
