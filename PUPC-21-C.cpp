//Person Identification System using RFID Technology
//2021 PUPC problem C
#include <iostream>
#include <algorithm>
#include <sstream>
#include <map>
using namespace std;

int main(){

    int t, n;
    map<string, string> Map;

    cin >> t;
    while(t--){
        string s;
        cin >> s;

        for(auto &it: s){
            if(it == ',')
                it = ' ';
        }

        stringstream ss(s);
        string id, uid;
        ss >> id >> uid;

        reverse(uid.begin(), uid.end());
        for(int i=0; i<uid.length(); i+=2){
            swap(uid[i], uid[i+1]);
        }
        if(uid[0] == '0')
            uid.erase(0, 1);

        Map[id] = uid;
    }

    cin >> n;
    while(n--){
        long long number;
        cin >> number;

        stringstream ss;
        ss << hex << number;
        string res(ss.str());
        for(auto &it: res){
            if(isalpha(it)){
                it = toupper(it);
            }
        }

        auto it = find_if(Map.begin(), Map.end(), [res](const auto &it){
            return it.second == res;
        });
        if(it != Map.end())
            cout << it->first << '\n';
        else
            cout << "X\n";
    }

    return 0;
}
