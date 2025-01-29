// 5. Write a program which display addition of elements from singly linear linked list.

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

void AdditionDigit(PNODE Head)
{
    int iCnt = 0;
    int iSum=0, iDigit=0;

    printf("Sum of each digit is: \n");
    while(Head != NULL)
    {
        while(Head->data != 0)
        {
            iDigit = Head->data % 10;
            Head->data = Head->data / 10;
            iSum = iSum + iDigit;
        }    
        printf("%d\t",iSum);
        iSum = 0;
        Head = Head->next;
    }
}

int main()
{
    PNODE First = 0;
  
    InsertFirst(&First, 41);
    InsertFirst(&First, 107);
    InsertFirst(&First, 514);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);
    InsertFirst(&First, 6);
    InsertFirst(&First, 89);
   
    Display(First);

    AdditionDigit(First);
  
    return 0;
}