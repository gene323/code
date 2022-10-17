//Population Count
//2019 ICPC NCPU
#include <iostream>
using namespace std;

int main(){

    int arr[11000];
    for(int i=0; i<11000; i++){
        int temp = i;
        int bit = 0;
        while(temp){
            bit = bit + (temp%2);
            temp /= 2;
        }
        arr[i] = bit;
    }
    int m;
    int b, e;
    cin >> m;
    while(m--){
        cin >> b >> e;

        int sum = 0;
        for(int i=b; i<=e; i++){
            sum += arr[i];
        }
        cout << sum << '\n';
    }
    return 0;
}
