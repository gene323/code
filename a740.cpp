//zerojudge a740
//Date: 2022/03/26
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    while(cin >> num){
        bool flag = 1;
        int sum = 0;
        for(int i=2; i<=sqrt(num)+1; i++){
            if(num%i == 0){
                flag = 0;
                while(num > 1 && num % i == 0){
                    sum += i;
                    num /= i;
                }
            }
        }
        if(flag){
            cout << num << '\n';
        }
        else{
            cout << sum+((num!=1)?num:0) << '\n';
        }
    }
    return 0;
}
