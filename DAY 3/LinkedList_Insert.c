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
void deleteBeg();
void deleteLast();
void deleteBet();
void SearchItem();
void main()
{    
    int choice=10;
    while(choice!=0)
    {    
    printf("1. Insert at beginning.\n2. Insert at Last\n3. Display Linked List\n4. Insert Between\n5. Delete Beginning\n6. Delete Last\n 7. Delete Given Item\n 8. Search Given Item\n0. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: {insertBeg(); break;}
        case 2: {insertLast();break;}
        case 3: {displayList(); break;} 
        case 4: {insertBet(); break;} 
        case 5: {deleteBeg(); break;}
        case 6: {deleteLast(); break;}
        case 7: {deleteBet(); break;}
        case 8: {SearchItem(); break;}
        
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

void deleteBeg()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("\nLinked List is empty\n");
    }
    ptr=head;
    head=head->next;
    printf("\nDeleted Element is : %d",ptr->data);
    free(ptr);
    printf("\nStarting Node Deleted\n");
}

void deleteLast()
{
    struct node *ptr, *temp;
    if(head==NULL)
    {
        printf("\nLinked List is empty\n");
    }
    temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    ptr=temp->next;
    temp->next=NULL;
    printf("\nDeleted Element is : %d",ptr->data);
    free(ptr);
    
}

void deleteBet()
{
    struct node *ptr, *temp;
    int item;
    if(head==NULL)
    {
        printf("\nLinked List is empty\n");
    }
    printf("\nEnter Item to delete: ");
    scanf("%d",&item);
    temp=head;
    while(temp->next->data!=item)
    {
        temp=temp->next;
    }
    ptr =temp->next;
    temp->next=temp->next->next;
    ptr->next=NULL;
    free(ptr);
    printf("\nItem Deleted Successfully\n");
}

void SearchItem()
{
    struct node *ptr;
    int item;
    int loc=0;
    ptr=head;
    if(ptr==NULL)
    {
        printf("\nUnderflow\n");
    }
    printf("\nEnter Item to Search: ");
    scanf("%d",&item);
    while(ptr->data!=item)
    {
        ptr=ptr->next;
        loc++;
    }
    if(ptr==NULL)
    {
        printf("\nItem Not Present in Linked List");
    }
    else
    {
        printf("\nItem is present on : %d\n",(loc+1));
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
