//zerojudge e597
//Date: 2022/03/31
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void* a, const void* b){
    return (char*)a - (char*)b;
}
int main(){
    char s1[1000];
    char s2[1000];

    while(gets(s1) != NULL && gets(s2) != NULL){

        int a1[26] = { 0 };
        int a2[26] = { 0 };
        char res[1000] = "";
        for(int i=0; i<strlen(s1); i++){
            ++a1[s1[i]-'a'];
        }
        for(int i=0; i<strlen(s2); i++){
            ++a2[s2[i]-'a'];
        }

        int pos = 0;
        for(int i=0; i<26; i++){
            if(a1[i] > 0 && a2[i] > 0){
                int m = (a1[i] > a2[i])?a2[i]:a1[i];
                while(m--){
                    res[pos++] = (i + 'a');
                }
            }
        }
        --pos;
        if(strlen(res) == 0){
            printf("\n", res);
        }
        else{
            qsort(res, sizeof(res), sizeof(char), cmp);
            printf("%s\n", res);
        }
    }
    return 0;
}