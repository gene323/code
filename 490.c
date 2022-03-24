//UVA 490
#include <stdio.h>
#include <string.h>
int main(){

    char str[110][110];
    //maxLen is column
    int maxLen = 0;
    //point is row
    int point = 0;
    char s[110];
    while(gets(s) != NULL){
        strcpy(str[point], s);
        if(maxLen < strlen(str[point]))
            maxLen = strlen(str[point]);
        point++;
    }
    //due to while loop is add one more time
    //so we need to subtract one
    point -= 1;

    //maxLen is row now
    //point is column now
    for(int i=0; i<maxLen; i++){
        for(int j=point; j>=0; j--){
            if(i < strlen(str[j]))
                printf("%c", str[j][i]);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}