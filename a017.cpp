//zerojudge a017
//Date: 2022/03/26
//not done yet
#include <iostream>
#include <string>
#include <sstream>
#include <ctype.h>
#include <queue>
#include <stack>
using namespace std;

int pre(char ch){
    if(ch == '+' || ch == '-')
        return 1;
    else if(ch == '*' || ch == '/' || ch == '%')
        return 2;
    return 0;
}

string inToPost(string infix){
    stack<char> stk;
    string postfix = "";
    stk.push('#');

    stringstream ss(infix);
    queue<int> num;
    queue<char> op;
    string str;
    //count sum of operations
    while(ss >> str){
    }

    while(ss >> num){

        postfix += to_string(num);
        postfix += ' ';

        if(op == '(')
            stk.push(op);
        else if(op == ')'){
            while(stk.top() != '#' && stk.top() != '('){
                postfix += stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else{
            while(stk.top() != '#' && pre(op) <= pre(stk.top())){
                postfix += stk.top();
                stk.pop();
            }
            stk.push(op);
           
        }
    }
//    for(auto &it: infix){
//        if(isalnum(char(it))){
//            postfix += it;
//        }
//        else if(it == '('){
//            stk.push(it);
//        }
//        else if(it == ')'){
//            while(stk.top() != '#' && stk.top() != '('){
//                postfix += stk.top();
//                stk.pop();
//            }
//            stk.pop();
//        }
//        else{
//            while(stk.top() != '#' && pre(it) <= pre(stk.top())){
//                postfix += stk.top();
//                stk.pop();
//            }
//            stk.push(it);
//           
//        }
//    }
    while(stk.top() != '#'){
        postfix += stk.top();
        stk.pop();
    }
    return postfix;
}

int main(){

    string str;
    getline(cin ,str);
    cout << inToPost(str) << '\n';
    return 0;
}
