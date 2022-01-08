//fcuoj binary add
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max(a, b) (a>b)?a:b

char *addStrings(char *n1, char *n2, int n1Len, int n2Len){
    int resLen = max(n1Len, n2Len);
    char *res = (char*)malloc((resLen + 2)* sizeof(char));
    int sum = 0;
    int resIndex = resLen;
    while(n1Len || n2Len){
        if(n1Len){
            n1Len -= 1;
            sum += (n1[n1Len] - '0');
        }
        if(n2Len){
            n2Len -= 1;
            sum += (n2[n2Len] - '0');
        }
        res[resIndex--] = (sum % 2) + '0';
        sum /= 2;
    }
    if(sum){
        res[resIndex] = sum + '0';
        resIndex -= 1;
    }
    if(resIndex == 0)
        return res + 1;
    return res;
}
int main(){
    char n1[1000];
    char n2[1000];
    gets(n1);
    gets(n2);
    printf("%s\n", addStrings(n1, n2, strlen(n1), strlen(n2)));
    return 0;
}