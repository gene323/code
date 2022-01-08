#include <stdio.h>

int main(){

    char mine[100][100];
    int n;
    int m;
    int count = 1;
    while(scanf("%d%d", &n, &m)){
        if(n == 0 && m == 0)
            break;
        for(int i=0; i<n; i++){
            getchar();
            for(int j=0; j<m; j++){
                scanf("%c", &mine[i][j]);
            }
            
        }
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<m; j++)
        //         printf("%c", mine[i][j]);
        //     puts("");
        // }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int countmine = 0;
                if(mine[i][j] == '.'){
                    //up
                    if(i!=0 && mine[i-1][j]=='*')
                        countmine++;
                    //down
                    if(i!=n-1 && mine[i+1][j]=='*')
                        countmine++;
                    //right
                    if(j!=m-1 && mine[i][j+1]=='*')
                        countmine++;
                    //left
                    if(j!=0 && mine[i][j-1]=='*')
                        countmine++;
                    //up & right
                    if((i!=0 && j!=m-1) && mine[i-1][j+1]=='*')
                        countmine++;
                    //up & left
                    if((i!=0 && j!=0) && mine[i-1][j-1]=='*')
                        countmine++;
                    //down & right
                    if((i!=n-1 && j!=m-1) && mine[i+1][j+1]=='*')
                        countmine++;
                    //down & left
                    if((i!=n-1 && j!=0) && mine[i+1][j-1]=='*')
                        countmine++;
                    mine[i][j] = (char)countmine + '0';
                }
            }
        }
        printf("Field #%d:\n", count++);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                printf("%c", mine[i][j]);
            }
            printf("\n");
        }
        puts("");
    }//end while loop
}