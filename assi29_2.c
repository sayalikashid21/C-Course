// 2. Write a program which search last occurrence of particular element from singly linear linked list.Function should return position at which element is found.

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

int LastOcc(PNODE Head, int no)
{
    int iPos = 1, iFound = 0;
    iFound = -1;

    while(Head != NULL)
    {
        if(Head->data == no)
        {
            iFound = iPos;
        }
        Head = Head->next;
        iPos++;
    }

    return iFound;
}

int main()
{
    PNODE First = 0;
    int iRet = 0, no=0;

    InsertFirst(&First, 10);
    InsertFirst(&First, 21);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    InsertFirst(&First, 5);
    InsertFirst(&First, 9);

    Display(First);

    printf("\nEnter the number: ");
    scanf("%d",&no);

    iRet = LastOcc(First, no);

    printf("\nLast Occurrence is: %d",iRet);
    
    return 0;
}