#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stud_node{
	int num;
	char name[20];
	int score;
	struct stud_node *next;
};
struct stud_node *Creat_Stu_Doc();
struct stud_node *DeleteDoc(struct stud_node *head,int min_score);
void Ptrint_Stu_Doc(struct stud_node *head);
int main()
{
	struct stud_node *head;
	int min_score;

	head=Creat_Stu_Doc();
	scanf("%d",&min_score);
	head=DeleteDoc(head,min_score);
	Ptrint_Stu_Doc(head);
	return 0;
}

struct stud_node *Creat_Stu_Doc() {
    struct stud_node* head = NULL;
    struct stud_node* tail = NULL;
    struct stud_node* p = NULL;
    int num;
    scanf("%d", &num);
    while (num != 0) {
        p = (struct stud_node*) malloc(sizeof(struct stud_node));
        p->num = num;
        scanf("%s", p->name);
        scanf("%d",&(p->score));
        p->next = NULL;
        if (head == NULL) {
            head = p;
        } else {
            tail->next = p;
        }
        tail = p;
        scanf("%d", &num);
    }
    return head;
}

struct stud_node *DeleteDoc(struct stud_node *head,int min_score){
    struct stud_node* pre = NULL;
    struct stud_node* cur = head;
    while (cur != NULL) {
        if (cur->score < min_score) {
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

void Ptrint_Stu_Doc(struct stud_node *head){
    while (head != NULL) {
        printf("%d %s %d\n", head->num, head->name, head->score);
        head = head->next;
    }
}
