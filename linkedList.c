#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *nextptr;
};

typedef struct node list;

int main(){
    
    list *first, *current, *previous;
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        current = (list*) malloc(sizeof(list));
        scanf("%d", &(current->data));

        if(i == 0)
            first = current;
        else
            previous->nextptr = current;
        current->nextptr = NULL;
        previous = current;
    }

    current = first;
    while(current != NULL){
        printf("address=%p ", current);
        printf("data=%d ", current->data);
        printf("next=%p\n",current->nextptr);
        current = current->nextptr;
    }

}