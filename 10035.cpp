#include<stdio.h>
#include<stdlib.h>
struct stud_node{
	int num;
	struct stud_node *next;
};
struct stud_node *Creat_Stu_Doc();
void Ptrint_Stu_Doc(struct stud_node *head);
struct stud_node *InserDoc(struct stud_node *list1,struct stud_node *list2);
int main()
{
	struct stud_node  *list1,*list2;

	list1=Creat_Stu_Doc();
	list2=Creat_Stu_Doc();
	list1=InserDoc(list1,list2);
	Ptrint_Stu_Doc(list1);
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
struct stud_node *InserDoc(struct stud_node *list1,struct stud_node *list2) {
    struct stud_node* head = NULL;
    struct stud_node* cur = NULL;
    struct stud_node* sel = NULL;
    
    while (list1 != NULL && list2 != NULL) {
        if (list1->num < list2->num) {
            sel = list1;
            list1 = list1->next;
        } else {
            sel = list2;
            list2 = list2->next;
        }
        sel->next = NULL;
        if (cur == NULL) {
            head = sel;
            cur = head;
        } else {
            cur->next = sel;
            cur = sel;
        }
    }
    
    while (list1 != NULL) {
        sel = list1;
        list1 = list1->next;
        cur->next = sel;
        cur = sel;
    }
    
    while (list2 != NULL) {
        sel = list2;
        list2 = list2->next;
        cur->next = sel;
        cur = sel;
    }
    
    return head;
}
