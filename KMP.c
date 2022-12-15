#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void countLPS(char *, int *);

int main(){
    char target[1000];
    char pattern[1000];
    //lps is to count longest the string's prefix which same as the string's suffix
    //Suppose pattern = "AACA"
    //string "A" is no prefix or suffix
    //We set lps[0] = 0
    int lps[1000] = { 0 };

    scanf("%[^\n]%*c", target);
    scanf("%[^\n]%*c", pattern);

    countLPS(pattern, lps);
    puts("LPS array");
    for(int i=0; i<strlen(pattern); i++){
        printf("%d ", lps[i]);
    }
    puts("");

    int j = 0;
    for(int i=0; i<strlen(target); i++){
        if(target[i] == pattern[j]){
            j++;
        }
        else if(j != 0){
            j = lps[j-1];
            i--;
        }
        if(j+1 == strlen(pattern)){
            printf("Pattern found at index %d\n", i-j+1);
            j = 0;
        }
    }

    return 0;
}

void countLPS(char *pattern, int *lps){
    int i = 0;
    //Because lps[0] = 0
    //We count lps index start from 1
    int j = 1;
    int cnt = 1;
    while(j < strlen(pattern)){
        if(pattern[i] == pattern[j]){
            lps[j] = cnt++;
            i++, j++;
        }
        else if(i != 0){
            i = lps[i-1];
            cnt = i+1;
        }
        else{
            lps[j++] = 0;
        }
    }
}

