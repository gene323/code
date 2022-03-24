#include<bits/stdc++.h>

using namespace std;

bool check(int x , int y , int xx , int yy , int res){
    return (xx + res >= x || xx - res < 0 || yy + res >= y || yy - res < 0);
}

int search(vector <vector <char>> &vec , int x , int y , int cx , int cy){
//int search(char* vec[] , int x , int y , int cx , int cy){
    char center = vec[cx][cy]; 
    int res = 0;

    int cnt = 0;
    while(true){
        for(int xx = cx - res ; xx <= cx + res ; xx++){
            for(int yy = cy - res ; yy <= cy + res ; yy++){
                if(!(0 <= xx && xx < x && 0 <= yy && yy < y)){
                    return res * 2 - 1;
                } 
                if(vec[xx][yy] != center){
                    return res * 2 - 1;
                }
            }
        }
        res ++;
    }
}

int main(){
    int rnd;
    cin >> rnd;
    
    for(int r = 0 ; r < rnd ; r++){
        int x , y , j;
        int cx , cy;
        int res = 0;
        char center , tmp;

        cin >> x >> y >> j;
        cout << x << " " << y << " " << j << endl;

        //char vec[x][y];
        vector <vector <char>> vec(x , vector <char>(y));

        for(int xx = 0 ; xx < x ; xx++){
            for(int yy = 0 ; yy < y ; yy++){
                cin >> tmp;
                vec[xx][yy] = tmp;
            }
        }

        /*
        for(int i = 0 ; i < vec.size() ; i++){
            for(int k = 0 ; k < vec[i].size() ; k++){
                cout << vec[i][k];
            }
            cout << endl;
        }
        */

        for(int r = 0 ; r < j ; r++){
            cin >> cx >> cy;
            cout << search(vec , x , y , cy , cx) << endl;
        }
    }

    return 0;
}
