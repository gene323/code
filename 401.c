//Uva 401
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[30];
    while(scanf("%s", str) != EOF){
        int isMir = 1;
        int isPal = 1;
        int len = strlen(str);

        //judge palindrome
        for(int i=0; i<len/2; i++){
            if(str[i] != str[len - i - 1]){
                isPal = 0;
                break;
            }
        }

        char mirStr[30];
        strcpy(mirStr, str);
        //mirror the new string
        for(int i=0; i<len; i++){
            switch (mirStr[i]){
                case 'A':
                    mirStr[i] = 'A';
                    break;
                case 'E':
                    mirStr[i] = '3';
                    break;
                case 'H':
                    mirStr[i] = 'H';
                    break;
                case 'I':
                    mirStr[i] = 'I';
                    break;
                case 'J':
                    mirStr[i] = 'L';
                    break;
                case 'L':
                    mirStr[i] = 'J';
                    break;
                case 'M':
                    mirStr[i] = 'M';
                    break;
                case 'O':
                    mirStr[i] = 'O';
                    break;
                case 'S':
                    mirStr[i] = '2';
                    break;
                case 'T':
                    mirStr[i] = 'T';
                    break;
                case 'U':
                    mirStr[i] = 'U';
                    break;
                case 'V':
                    mirStr[i] = 'V';
                    break;
                case 'W':
                    mirStr[i] = 'W';
                    break;
                case 'X':
                    mirStr[i] = 'X';
                    break;
                case 'Y':
                    mirStr[i] = 'Y';
                    break;
                case 'Z':
                    mirStr[i] = '5';
                    break;
                case '1':
                    mirStr[i] = '1';
                    break;
                case '2':
                    mirStr[i] = 'S';
                    break;
                case '3':
                    mirStr[i] = 'E';
                    break;
                case '5':
                    mirStr[i] = 'Z';
                    break;
                case '8':
                    mirStr[i] = '8';
                    break;
                default:
                    isMir = 0;
                    break;
            }
        }
        //judge mirror
        for(int i=0; i<len; i++){
            if(mirStr[i] != str[len - i - 1]){
                isMir = 0;
                break;
            }
        }
        if(isMir && isPal)
            printf("%s -- is a mirrored palindrome.", str);
        else if(isMir && isPal == 0)
            printf("%s -- is a mirrored string.", str);
        else if(!isMir && isPal)
            printf("%s -- is a regular palindrome.", str);
        else
            printf("%s -- is not a palindrome.", str);
        puts("");
        puts("");
    }
    return 0;
}
