#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int t;
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