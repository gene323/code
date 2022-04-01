//zerojudge a224
//Date: 2022/03/26
#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main(){
    string str;
    while(cin >> str){
        int letter[26] = { 0 };
        for(auto &it: str){
            if(isalpha(it)){
                if('a' <= it && it <= 'z')
                    ++letter[it-'a'];
                else
                    ++letter[it-'A'];
            }
        }
        int res = 0;
        for(int i=0; i<26; i++){
            if(letter[i]%2 && letter[i] != 0){
                ++res;
            }
        }
        if(res < 2){
            cout << "yes !\n";
        }
        else{
            cout << "no...\n";
        }
    }
    return 0;
}
