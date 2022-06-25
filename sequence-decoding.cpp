//Sequence Decoding
//2019 ICPC NCPU
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

int main(){

    int n;
    cin >> n;
    while(n--){
        stack<char> st;
        string s, res;
        cin >> s;
        for(int i=0; i<s.length(); i++){
            if(s[i] == ']'){
                string temp;
                while(st.top() != '['){
                    temp += st.top();
                    st.pop();
                }
                st.pop();
                reverse(temp.begin(), temp.end());
                int k = st.top() - '0';
                st.pop();
                string temp2 = temp;
                temp = "";
                while(k--){
                    temp += temp2;
                }
                for(int i=0; i<temp.length(); i++)
                    st.push(temp[i]);
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            res += st.top();
            st.pop();
        }
        for(int i=res.length() - 1; i>=0; i--){
            cout << res[i];
        }
        cout << '\n';
    }
    return 0;
}
