//Factors
//2021 PUPC problem A
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        int sum = 0;
        cin >> n;
        for(int i=1; i<sqrt(n); i++){
            if(n % i == 0){
                sum = sum + i + (n / i);
            }
        }
        if(sqrt(n) == (int)sqrt(n))
            sum += (sqrt(n));
        cout << sum << '\n';
    }
}
