// 3. Write a program which display product of all digits of all element of singly linked list.(Don't consider 0).

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

void Product(PNODE Head)
{
    int iCnt = 0;
    int iMulti = 1, iDigit=0;

    printf("Product of elements of linked list is: \n");
    while(Head != NULL)
    {
        while(Head->data != 0)
        {
            iDigit = Head->data % 10;
            Head->data = Head->data / 10;
            iMulti = iMulti * iDigit;
        }   
        printf("%d\t",iMulti);
        Head = Head->next;
        iMulti = 1; 
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

    Product(First);
  
    return 0;
}