#include <stdlib.h>
#include "Header.h"

SortedListPtr SLCreate(CompareFuncT cf)
{
    SortedListPtr newPtr = (struct SortedListPtr*) malloc(sizeof(struct SortedList));
    
    newPtr->head = NULL;
    newPtr->CompareFuncT = cf;
    /*    newPtr->SortedListIteratorPtr = SLCreateIterator() */
};


void SLDestroy(SortedListPtr list)
{
    struct Node *cur = list->head;
    
    while(cur != NULL)
    {
        list->head = list->head->next;
        free(cur->data);
        cur->next = NULL;
        free(cur->next);
        free(cur);
        cur = list->head;
    }
    free(list);
    return;
}

int SLInsert(SortedListPtr list, void *newObj){
    CompareFuncT* current = list->CompareFuncT;
     Node nu = *(struct Node*) malloc(sizeof(struct Node));
     Node *cur = list->head;
    int temp = current(newObj, list->head->data); //This takes care of the first node in the linked list
    while(temp<=0 &&cur!=null){
        cur = cur->next;
        int temp = current(newObj, list->head->data);
    }
     Node *timp = (Node*) malloc(sizeof(Node));
    timp->data = cur->data;
    timp->next = cur->next;
    nu->data = newObj;
    nu->next = timp;
    free(cur);
    return 1;
   
}

int SLRemove(<#SortedListPtr list#>, <#void *newObj#>){
    
        CompareFuncT* current = list->CompareFuncT;
        Node nu = *(struct Node*) malloc(sizeof(struct Node));
        Node *cur = list->head;
        int temp = current(newObj, list->head->data); //This takes care of the first node in the linked list
        while(temp!=0 && cur!=NULL){
            cur = cur->next;
            int temp = current(newObj, list->head->data);
        }
    if (cur==NULL) {
        return 0;
    }
    cur* = (cur->next)*;
    return 1;
    
}

}
