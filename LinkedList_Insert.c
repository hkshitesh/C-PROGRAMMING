#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void insertBeg();
void insertLast();
void insertBet();
void displayList();
void main()
{    
    int choice=10;
    while(choice!=0)
    {    
    printf("1. Insert at beginning.\n2. Insert at Last\n3. Display Linked List\n4.Insert Between\n0. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: {insertBeg(); break;}
        case 2: {insertLast();break;}
        case 3: {displayList(); break;} 
        case 4: {insertBet(); break;} 
        case 0: { break;} 
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
        printf("\nOverflow\n");
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
void insertLast()
{
    struct node *ptr,*temp;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL)
    {
        printf("\nOverflow\n");
    }
    else
    {
        printf("enter the value for insertion: \n");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=NULL;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        printf("\nItem Inserted at beginning\n");
    }
}

void insertBet()
{
    struct node *ptr,*temp;
    int item;
    int loc;
    int i=1;
    ptr=(struct node *)malloc(sizeof(struct node *));
    if(ptr==NULL)
    {
        printf("\nOverflow\n");
    }
    else
    {
        printf("enter the value for insertion: \n");
        scanf("%d",&item);
        printf("enter position after you want to insert: \n");
        scanf("%d",&loc);
        ptr->data=item;
        ptr->next=NULL;
        temp=head;
        for(i=1;i<loc;i++)
        {
            temp=temp->next;
        }
        ptr->next=temp->next;
        temp->next=ptr;
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