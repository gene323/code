#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

const int dir[4][2] = {{0 , 1} , {1 , 0} , {-1 , 0} , {0 , -1}};
char arr[1003][1003];
bool walk[1003][1003] = {false};

bool ok(int x , int y , int n , int m){
    return not (x >= n || x < 0 || y >= m || y < 0);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n , m , x , y;
    char tmp;
    int ma = 0 , mi = 2147483647 , cnt = 0; 
    queue < pair<int , int>> q;

    cin >> n >> m;
    
    for(int x = 0 ; x < n ; x++){
        for(int y = 0 ; y < m ; y++){
            cin >> tmp;
            arr[x][y] = tmp;
            if(tmp == '#')
                walk[x][y] = true;
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(not walk[i][j] && arr[i][j] == 'W'){
                int res = 1;
                walk[i][j] = true;
                q.emplace(i , j);
                cnt++;                

                while(!q.empty()){
                    tie(x , y) = q.front();
                    q.pop();

                    for(int d = 0 ; d < 4 ; d++){
                        int nx = x + dir[d][0];
                        int ny = y + dir[d][1];
                        if(ok(nx , ny , n , m) && walk[nx][ny] != true && arr[nx][ny] == 'W'){
                            res++;
                            walk[nx][ny] = true;
                            q.emplace(nx , ny);
                        }
                    }
                }
                ma = max(ma , res);
                mi = min(mi , res);
            }
            
        }
    }
    if(mi == 2147483647)
        mi = 0;
    cout << ma << ' ' << mi << ' ' << cnt << '\n';
}