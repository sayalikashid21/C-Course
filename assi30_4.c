// 4. Write a program which return the Second maximum element from singly linear linked list.

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("Contents of Linked List : \n");

    while(Head != NULL)
    {
        printf("| %d |->",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Maximum(PNODE Head)
{
    int Max = 0;

    while(Head != NULL)
    {
        if(Head->data >= Max)
        {
            Max = Head->data;
        }
        Head = Head->next;
    }
    return Max;
}

int main()
{
    PNODE First = 0;
    int iRet = 0;
    
    InsertFirst(&First, 3);
    InsertFirst(&First, 41);
    InsertFirst(&First, 107);
    InsertFirst(&First, 51);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);
    InsertFirst(&First, 6);
    InsertFirst(&First, 89);
   
    Display(First);

    iRet = Maximum(First);

    printf("Even elements addition is: %d",iRet);
  
    return 0;
}