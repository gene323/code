//UVA 105
#include <stdio.h>

int main(){
    int building[10001] = {0};
    int x1;
    int h;
    int x2;
    int head = 10001;
    int tail = 0;
    while(scanf("%d %d %d", &x1, &h, &x2) != EOF){
        if(x1 + x2 == 0)
            break;
        if(head > x1)
            head = x1;
        if(tail < x2)
            tail = x2;
        for(int i=x1; i<x2; i++){
            if(building[i] != 0){
                if(building[i] < h)
                    building[i] = h;
            }
            else{
                building[i] = h;
            }
        }
    }
    for(int i=head; i<=tail; i++)
        printf("%d ", building[i]);
    puts("");
    for(int i=head; i<=tail; i++){
        if(i == head)
            printf("%d ", i);
        else if(building[i] != building[i-1]){
            printf("%d %d ", building[i-1], i);
        }
    }
    printf("0");
    
}