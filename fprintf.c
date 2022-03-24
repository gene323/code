#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    char *name;
    int id;

    ptr = fopen("list.txt", "w");

    if(ptr == NULL){
        printf("Unable to open the file");
    }
    else{
        scanf("%s %d", name, &id);
        fprintf(ptr, "%s\n%d", name, id);
        fclose(ptr);
    }

    return 0;
}
