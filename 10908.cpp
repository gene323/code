<<<<<<< HEAD
//UVa 10908
#include <iostream>
#include <algorithm>
=======
#include <iostream>
#include <cstring>
>>>>>>> 268b6a3b605b56584225fd0a0193cffcafa6556b
using namespace std;

int main(){
    int t;
<<<<<<< HEAD
    int row, column;
    int q;
    int x, y; 
    
    cin >> t;

    //run t times
    while(t--){
        cin >> row >> column >> q;
        cout << row << ' ' << column << ' ' << q << '\n';
        char square[row][column];

        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                cin >> square[i][j];
            }
        }
        //ask q times
        while(q--){
            int M = 1;
            cin >> x >> y;

            int valRow = 1;
            int valCol = 1;
            bool judge = true;

            char ch = square[x][y];
            while(judge){
                for(int i = x-valRow; i <= x+valRow; i++){
                    for(int j = y-valCol; j <= y+valCol; j++){
                        if( (0 <= i && i < row) && (0 <= j && j < column)){
                            if(square[i][j] != ch){
                                judge = false;
                                break;
                            }
                        }
                        else{
                            judge = false;
                            break;
                        }
                    }
                    if(!judge)
                        break;
                }//end for i loop
                if(judge){
                    M = max(M, (1+valRow*2));
                }
                valCol ++; valRow ++;
            }//end while loop
            cout << M << '\n';
        }//end while q loop
    }
}
=======
    int n, m, q;
    int p1, p2;
    cin >> t;
    char field[110][110];
    while(t--){
        cin >> n >> m >> q;
        //memory set field with 0
        memset(field, 0, sizeof(field));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
                cin >> field[i][j];
        }
        cout << n << ' ' << m << ' ' << q <<'\n';
        while(q--){
            cin >> p1 >> p2;
            int ans = 1;
            int i = 1;
            while(1){
                bool flag = false;
                for(int x=p1-i; x<=p1+i; x++){
                    for(int y=p2-i; y<=p2+i; y++){
                        if(x<0 || y<0 || x>=n || y>=m){
                            flag= true;
                            break;
                        }
                        if(field[x][y]!=field[p1][p2]){
                            flag = true;
                            break;
                        }
                    }
                }
                if(flag){
                    break;
                }
                else
                    ans += 2;
                i++;
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
>>>>>>> 268b6a3b605b56584225fd0a0193cffcafa6556b
