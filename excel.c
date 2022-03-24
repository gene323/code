//fcuoj excel
#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    scanf("%s", s);
    int len = strlen(s);
    long long sum = 0;
    for(int i=0; i<len; i++){
        sum = sum*26 + (s[i]-'A' + 1);
    }
    printf("%lld", sum);
    return 0;
}