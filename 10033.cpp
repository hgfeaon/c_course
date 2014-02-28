#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stud_node{
	int num;
	struct stud_node *next;
};
struct stud_node *Creat_Stu_Doc();
void Ptrint_Stu_Doc(struct stud_node *head);
int main()
{
	struct stud_node *head;

	head=Creat_Stu_Doc();
	Ptrint_Stu_Doc(head);
	return 0;
}

struct stud_node *Creat_Stu_Doc() {
    struct stud_node* head = NULL;
    struct stud_node* p = NULL;
    int num;
    scanf("%d", &num);
    
    while (num != -1) {
        p = (struct stud_node*) malloc(sizeof(struct stud_node));
        p->num = num;
        
        if (head == NULL) {
            p->next = NULL;
            head = p;
        } else {
            p->next = head;
            head = p;
        }
        scanf("%d", &num);
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
