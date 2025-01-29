// 5. Write a program which display largest digits of all element from singly linked list.

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

void Largest(PNODE Head)
{
    int iCnt = 0;
    int iMax = 0, iDigit=0;

    while(Head != NULL)
    {
        while(Head->data != 0)
        {
            iDigit = Head->data % 10;
            Head->data = Head->data / 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
        }   
        printf("%d\t",iMax);
        Head = Head->next;
        iMax = 0;           // negative value sathi correct nhi ahe
    } 
}

int main()
{
    PNODE First = 0;
    
    InsertFirst(&First, 891);
    InsertFirst(&First, 285);
    InsertFirst(&First, 176);
    InsertFirst(&First, 414);
    InsertFirst(&First, 632);
    InsertFirst(&First, 111);
 
    Display(First);

    Largest(First);
  
    return 0;
}

