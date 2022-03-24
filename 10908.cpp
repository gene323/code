//UVa 10908
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
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
