//zerojudge a981
//Date: 2022/03/26
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

void dfs(int number[], bool visited[], int n, int pos, int m, bool &flag){
    //pos is position
    if(m == 0){
        flag = 1;
        for(int i=0; i<n; i++){
            if(visited[i]){
                cout << number[i] << ' ';
            }
        }
        cout << '\n';
        return ;
    }
    //position overflow the size of number[]
    if(pos >= n) return ;
    //if m - number[pos], then m will be minus
    if(number[pos] > m) return ;

    visited[pos] = 1;
    //choose this number to subtract m
    dfs(number, visited, n, pos+1, m-number[pos], flag);

    visited[pos] = 0;
    //not to choose this number to subtract m
    dfs(number, visited, n, pos+1, m, flag);
    return ;
}
int main(){
    int n, m;
    while(cin >> n >> m){
        int number[n];
        bool visited[n];
        memset(visited, 0, sizeof(visited));
        bool flag = 0;
        for(int i=0; i<n; i++){
            cin >> number[i];
        }
        sort(number, number+n);
        dfs(number, visited, n, 0, m, flag);
        
        if(!flag){
            cout << -1 << '\n';
        }
    }
    return 0;
}
