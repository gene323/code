#include <stdio.h>
#include <string.h>
int main(){

    char str[] = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    char ch;
    while(scanf("%c", &ch) != EOF){
        int slen = strlen(str);
        for(int i=0; i<slen; i++){
            if(ch == ' '){
                putchar(ch);
                break;
            }
            else if(ch == '\n'){
                putchar(ch);
                break;
            }
            else if(ch == str[i]){
                printf("%c", str[i-2]);
                break;
            }
        }
    }
    return 0;
}