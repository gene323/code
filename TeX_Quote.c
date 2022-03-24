#include <stdio.h>

int main(){
    char ch;
    int judge = 0;
    while(scanf("%c", &ch) != EOF){
        if(ch == '\"' && !judge){
            judge = 1;
            printf("``");
        }
        else if(ch == '\"' && judge){
            judge = 0;
            printf("''");
        }
        else
            putchar(ch);
    }
    return 0;
}