#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insertBeg();
void displayList();
void main()
{    
    int choice=10;
    while(choice!=0)
    {    
    printf("1. Insert at beginning.\n2. Insert at Last\n3. Display Linked List\n0. Exit\n");
    printf("Enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: {insertBeg(); break;}
        case 2: { break;}
        case 3: {displayList(); break;} 
        default: {printf("Wrong Choice");}
    }
    }
}
void insertBeg()
{
    struct node *ptr;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL)
    {
        printf("Overflow");
    }
    else
    {
        printf("enter the value for insertion\n");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("\nItem Inserted at beginning\n");
    }
}
void displayList()
{
    struct node *ptr;
    ptr=head;
    if(ptr==NULL)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("\n%d\n",ptr->data);
            ptr=ptr->next;
        }
    }
}