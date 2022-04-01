//zerojudge a034
//Date: 2022/03/26
#include <iostream>
using namespace std;

int main(){

    int num;
    while(cin >> num){
        int res[100] = { 0 };
        int i = 0;
        while(num){
            res[i++] = num%2;
            num /= 2;
        }
        for(int j=i-1; j>=0; j--){
            cout << res[j];
        }
        cout << '\n';
    }
    return 0;
}
