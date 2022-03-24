//leetcode 1525
//Number of Good Ways to Split a String
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[100000];
    scanf("%s", str);

    int pivot = 0;
    int sum = 0;
    while(pivot < strlen(str)){
        int letter1[26] = { 0 };
        int letter2[26] = { 0 };
        int count1 = 0;
        int count2 = 0;
        for(int i=0; i<strlen(str); i++){
            if(i <= pivot){
                ++letter1[str[i] - 'a'];
            }
            else{
                ++letter2[str[i] - 'a'];
            }
        }
        ++pivot;
        for(int i=0; i<26; i++){
            if(letter1[i] != 0)
                ++count1;
            if(letter2[i] != 0)
                ++count2;
        }
        if(count1 == count2)
            ++sum;
    }
    printf("%d\n", sum);
    return 0;
}
