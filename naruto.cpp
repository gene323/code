//Naruto
//2020 PUPC problem B
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    //do a ninjutsu
    //naruto = naruto * 2 + sakura
    //sakura = sakura + past naruto
    int n;
    while(cin >> n){
        if(n == -1)
            break;

        int naruto = 1;
        int sakura = 0;

        while(n--){
            int temp = sakura;
            sakura += naruto;
            naruto = naruto * 2 + temp;
        }
        cout << naruto << ' ' << sakura << '\n';
    }
    return 0;
}
