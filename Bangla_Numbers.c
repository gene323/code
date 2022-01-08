#include <stdio.h>
#include <stdlib.h>
#define kuti 10000000
#define lakh 100000
#define hajar 1000
#define shata 100

void bangla(long long n){
    //10000000 e7
    if(n / kuti){
        bangla(n / kuti);
        printf(" kuti");
        n %= kuti;
    }
    //100000 e5
    if(n / lakh){
        bangla(n / lakh);
        printf(" lakh");
        n %= lakh;
    }
    //1000 e3
    if(n / hajar){
        bangla(n / hajar);
        printf(" hajar");
        n %= hajar;
    }
    //100 e2
    if(n / shata){
        bangla(n / shata);
        printf(" shata");
        n %= shata;
    }
    if(n){
        printf(" %d", n);
    }
}
int main(){
    long long n;
    int count = 1;
    while(scanf("%lld", &n) != EOF){
        printf("%4d.", count++);
        if(n > 0)
            bangla(n);
        else 
            printf(" 0");
        puts("");
    }
    return 0;
}