#include <iostream>
using namespace std;
void test01(int =10){
    //占位参数也能设置默认参数
    cout<<"调用函数test01"<<endl;
}
int main() {
    test01();
    return 0;
}