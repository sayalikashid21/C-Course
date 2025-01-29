// 2. Write a program which display all palindrome element of singly linked list.

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

void Palindrome(PNODE Head)
{
    int iCnt = 0;
    int iRev=0, iDigit=0, iCopy=0;

    printf("Palindrome of linked list is: \n");
    while(Head != NULL)
    {
        iCopy = Head->data;
        while(Head->data != 0)
        {
            iDigit = Head->data % 10;
            Head->data = Head->data / 10;
            iRev = (iRev * 10) + iDigit;
        }   
        if(iCopy == iRev)
        {
            printf("%d\t",iCopy);
        } 
        
        iRev = 0;
        Head = Head->next;
    }
}

int main()
{
    PNODE First = 0;
    
    InsertFirst(&First, 11);
    InsertFirst(&First, 28);
    InsertFirst(&First, 17);
    InsertFirst(&First, 414);
    InsertFirst(&First, 6);
    InsertFirst(&First, 89);
 
    Display(First);

    Palindrome(First);
  
    return 0;
}