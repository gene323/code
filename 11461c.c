#include <stdio.h>

int main(){
    int num[100001] = {0};
    int k = 1;
    int sum = 0;
    for(int i=1; i<=100000; i++){
        if(i == k*k){
            k++;
            sum++;
        }
        num[i] = sum;
    }
    int a;
    int b;
    while(scanf("%d%d", &a, &b)){
        if(a == 0 && b == 0)
            break;
        printf("%d\n", num[b] - num[a-1]);
    }
    return 0;
}