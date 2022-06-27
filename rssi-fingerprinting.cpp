//RSSI fingerprinting
//2019 ICPC NCPU
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct{
    string s;
    int r;
    int t;
}Mac;

int main(){

    int n, m;
    cin >> n;
    while(n--){
        cin >> m;

        string s;
        int r, t;
        vector<Mac> vec;
        while(m--){
            cin >> s >> r >> t;
            if(t < 1000){
                vec.push_back({s, r, t});
            }
        }
        sort(vec.begin(), vec.end(), [](const auto &it1, const auto &it2){
            if(it1.r != it2.r)
                return it1.r > it2.r;
            return it1.t < it2.t;
        });

        for(int i=0; i<vec.size(); i++){
            if(i == 3)
                break;
            cout << vec[i].s << ' ' << vec[i].r << '\n';
        }
    }
    return 0;
}
