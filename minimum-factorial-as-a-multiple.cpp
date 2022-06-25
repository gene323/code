//Minimum Factorial as a Multiple
//2019 ICPC NCPU
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int arr[15] = { 1 };
    for(int i=1; i<15; i++){
        arr[i] = arr[i-1] * (i+1);
    }

    int m;
    int n;
    cin >> m;
    while(m--){
        cin >> n;
        for(int i=0; i<15; i++){
            if(arr[i] >= n && arr[i] % n == 0){
                cout << i + 1 << '\n';
                break;
            }
        }
    }
    return 0;
}
