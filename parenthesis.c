//vaild parenthesis string
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char str[100];
    scanf("%s", str);

    int star = 0;
    int right = 0;
    int left = 0;
    for(int i=0; i<strlen(str); i++){
        if(str[i] == '*')
            ++star;
        else if(str[i] == ')' )
            ++right;
        else if(str[i] == '(' )
            ++left;
        if(star + left == right){
            star = right = left = 0;
        }
        else if(star + left < right){
            printf("false");
            return 0;
        }
    }
    char revStr[100];
    int point = 0;
    for(int i=strlen(str)-1; i>=0; i--){
        if(str[i] == ')')
            revStr[point++] = '(';
        else if(str[i] == '(')
            revStr[point++] = ')';
        else
            revStr[point++] = '*';
    }

    star = right = left = 0;
    for(int i=0; i<strlen(revStr); i++){
        if(revStr[i] == '*')
            ++star;
        else if(revStr[i] == ')' )
            ++right;
        else if(revStr[i] == '(' )
            ++left;
        if(star + left == right){
            star = right = left = 0;
        }
        else if(star + left < right){
            printf("false");
            return 0;
        }
    }
    printf("true");
    return 0;
}
