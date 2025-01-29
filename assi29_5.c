// 5. Write a program which return smallest element from singly linear linked list.

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
    printf("NULL");
}

int Minimum(PNODE Head)
{
    int Min = 0;
    Min = Head->data;

    while(Head != NULL)
    {
        if(Head->data < Min)
        {
            Min = Head->data;
        }
        Head = Head->next;
    }
    return Min;
}

int main()
{
    PNODE First = 0;
    int iRet = 0;

    InsertFirst(&First, 3);
    InsertFirst(&First, 21);
    InsertFirst(&First, -101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    InsertFirst(&First, 5);
    InsertFirst(&First, 9);
   
    Display(First);

    iRet = Minimum(First);

    printf("\nMinimum elements is: %d",iRet);
    
    return 0;
}