//Boxes
//2019 ICPC NCPU
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main(){

    int n, m;
    while(cin >> n >> m){
        vector<int> vec(n, 0);
        for(int i=0; i<n; i++){
            vec[i] = i + 1;
        }

        int command, x, y;
        while(m--){
            cin >> command;
            if(command == 4){
                reverse(vec.begin(), vec.end());
            }
            else{
                cin >> x >> y;
                auto it1 = find(vec.begin(), vec.end(), x);
                auto it2 = find(vec.begin(), vec.end(), y);
                int index1 = distance(vec.begin(), it1);
                int index2 = distance(vec.begin(), it2);
                if(command == 3){
                    swap(vec[index1], vec[index2]);
                }
                else if(command == 2 && index1 -1 != index2){
                    //put x right to y
                    if(index1 < index2){
                        for(int i=index1; i<index2; i++){
                            swap(vec[i], vec[i+1]);
                        }
                    }
                    else{
                        for(int i=index1; i>index2+1; i--){
                            swap(vec[i], vec[i-1]);
                        }
                    }
                }
                else if(command == 1 && index1 + 1 != index2){
                    //put x left to y
                    if(index1 < index2){
                        for(int i=index1; i<index2-1; i++){
                            swap(vec[i], vec[i+1]);
                        }
                    }
                    else{
                        for(int i=index1; i>index2; i--){
                            swap(vec[i], vec[i-1]);
                        }
                    }
                }
            }
        }
        long long int sum = 0;
        for(int i=0; i<n; i++){
            if(i%2 == 0)
                sum += vec[i];
        }
        cout << sum << '\n';
    }
    return 0;
}
