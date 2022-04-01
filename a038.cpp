//zerojudge a038
//Date: 2022/03/26
#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int num;
    cin >> num;
    long long int res = 0;
    if(num == 0){
        cout << 0 << '\n';
        return 0;
    }
    while(num%10 == 0){
        num /= 10;
    }

    while(num > 0){
        res = res*10 + num%10;
        num /=10;
    }
    cout << res << '\n';

    return 0;
}
