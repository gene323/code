//fcuoj
#include <stdio.h>
#include <string.h>
int main(){
    char s[1000];
    gets(s);
    int len = strlen(s);
    int sum = 0;
    int r = 0;
    int l = 0;
    for(int i=0; i<len; i++){
        if(s[i] == 'R')
            r++;
        else if(s[i] == 'L')
            l++;
        if(r!= 0 && l!=0 && r == l){
            sum++;
            r = 0;
            l = 0;
        }
    }
    printf("%d\n", sum);
    return 0;
}