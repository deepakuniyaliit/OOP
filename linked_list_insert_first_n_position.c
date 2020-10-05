#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *START = NULL;
struct node* create_node(){
    struct node* temp;
    temp = (struct node *)malloc(sizeof(struct node));
    return temp;
}
void insert_n_position(int pos, int num){
    struct node *temp = START, *new_node = create_node();
    int count=0;
    new_node->data = num;
    while(count!=pos-2){
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
void insert_last(int num){
    struct node *temp = create_node(), *t;
    temp->data = num;
    if(START==NULL){
        START = temp;
        temp->next = NULL;
    }
    else{
        t = START;
        while(t->next!=NULL)
            t = t->next;
        t->next = temp;
        temp->next = NULL;
    }    
}
void view_list(){
    struct node *temp = START;
    if(START==NULL)
        printf("List is Empty \n");
    else{
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }
    printf("\n");
}
int count_list(){
    struct node *temp = START;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
int main()
{
    int choice,position,number,len;
    while(1){
        printf("1. Insert at last\n");
        printf("2. Insert at given position\n");
        printf("3. Print Length of list\n");
        printf("4. View list\n");
        printf("5. Exit\n");
        printf("Enter your coice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                while(1){
                    printf("Enter number {'0' for stop} : ");
                    scanf("%d",&number);
                    if(number!=0)
                        insert_last(number);
                    else
                        break;
                }
                break;
            case 2:
                printf("Enter position : ");
                scanf("%d",&position);
                printf("Enter number : ");
                scanf("%d",&number);
                insert_n_position(position, number);
                break;
            case 3:
                printf("Length of list is : %d\n",count_list());
                break;
            case 4:
                view_list();
                break;
            case 5:
                printf("Thank you ...");
                exit(0);
                break;
            default:
                printf("Enter valid number\n");
                break;
        }
    }
}