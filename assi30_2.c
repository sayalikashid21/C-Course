// 2. Write a program which displays all elements which are prime from singly linear linked list.

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

void DisplayPrime(PNODE Head)
{
    int iCnt = 0, iCount=0;

    printf("Prime number is: \n");
    while(Head != NULL)
    {
        for(iCnt=2; iCnt<=(Head->data)/2; iCnt++)
        {
            if(((Head->data) % iCnt) == 0)
            {
              iCount++;
            }
        }    
        if(iCount == 0)
        {
            printf("%d\t",Head->data);
        }
        iCount = 0;
        Head = Head->next;
    }
}

int main()
{
    PNODE First = 0;
    
    InsertFirst(&First, 3);
    InsertFirst(&First, 41);
    InsertFirst(&First, 107);
    InsertFirst(&First, 51);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);
    InsertFirst(&First, 6);
    InsertFirst(&First, 89);
   
    Display(First);

    DisplayPrime(First);
  
    return 0;
}