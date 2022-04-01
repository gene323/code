//zerojudge d563
//Date: 2022/03/27
#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;

    int arr[n];
    int prefix[n];
    int suffix[n];

    cin >> arr[0];
    prefix[0] = arr[0];
    for(int i=1; i<n; i++){
        cin >> arr[i];
        prefix[i] = prefix[i-1] + arr[i];
    }

    suffix[0] = arr[n-1];
    for(int i=1; i<n; i++){
        suffix[i] = suffix[i - 1] + arr[n-i-1];
    }
    int pre = 0;
    int suf = 0;
    int sum = 0;
    while(pre < n && suf < n){
        if(prefix[pre] == suffix[suf]){
            ++sum;
            ++pre;
            ++suf;
        }
        else if(prefix[pre] > suffix[suf])
            ++suf;
        else if(prefix[pre] < suffix[suf])
            ++pre;
    }
    cout << sum;
    return 0;
}
