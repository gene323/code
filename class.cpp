#include <iostream>
using namespace std;

class Demo{
    public:
        int a;
        int b;
        int set_c(int n);
        int get_c();
    private:
        int c;
};
int Demo::set_c(int n){
    c = n;
}
int Demo::get_c(){
    return c;
}
int main(){
    Demo t;
    int n;
    cin >> n;
    t.set_c(n);
    cout << t.get_c(); 
    return 0;
}