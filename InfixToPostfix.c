#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char stack[100];
int top = -1;

void push(char ch){
    stack[++top] = ch;
}

char pop(){
    if(top == -1)
        return -1;
    return stack[top--];
}

int priority(char ch){
    if(ch == '(')
        return 0;
    if(ch == '+' || ch == '-')
        return 1;
    if(ch == '*' || ch == '/')
        return 2;
    return 0;
}

int main(){


    char str[100];
    char op;
    //the following equals fgets(str, 50, stdin);
    scanf("%[^\n]%*c", str);

    for(int i=0; i<strlen(str); i++){
        if(isalnum(str[i])){
            printf("%c ", str[i]);
        }
        else if(str[i] == '('){
            push(str[i]);
        }
        else if(str[i] == ')'){
            while((op = pop()) != '('){
                printf("%c ", op);
            }
        }
        else if(str[i] == ' ')
            continue;
        else{
            while(priority(stack[top]) >= priority(str[i])){
                printf("%c ", pop());
            }
            push(str[i]);
        }
    }

    while(top != -1){
        printf("%c", pop());
    }

    puts("");
    return 0;
}
