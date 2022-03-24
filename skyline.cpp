#include <stdio.h>

typedef struct Building{
    int is;
    int high;
}Building;

int main(){
    Building building[5000];
    for(int i=0; i<5000; i++){
        building[i].is = 0;
        building[i].high = 0;
    }
    int x1;
    int h;
    int x2;
    int head = 5001;
    int tail = 0;
    while(scanf("%d %d %d", &x1, &h, &x2) != EOF){
        if(head > x1)
            head = x1;
        if(tail < x2)
            tail = x2;
        for(int i=x1; i<x2; i++){
            if(building[i].is == 1){
                if(building[i].high < h)
                    building[i].high = h;
            }
            else{
                building[i].is = 1;
                building[i].high = h;
            }
        }
    }
    for(int i=head; i<=tail; i++){
        if(i == head)
            printf("%d ", i);
        else if(building[i].high != building[i-1].high){
            printf("%d %d ", building[i-1].high, i);
        }
    }
    printf("0");
    // for(int i=head; i<=tail; i++){
    //     printf("%d ", building[i].high);
    // }
    return 0;
}