#include <iostream>
using namespace std;
int& test01(){
    static int temp=10;
    return temp;//局部变量不要作为引用返回值！
}
int main() {
    int &a=test01();
    cout<<"a的值："<<a<<endl;
    cout<<"a的值："<<a<<endl;
    return 0;
}