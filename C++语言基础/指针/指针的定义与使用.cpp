#include <iostream>
using namespace std;
int main() {
    int a=10;
    //定义：数据类型 * 变量名
    int* p;
    p=&a;
    //指针的使用：利用*操作指针变量指向的内存
    *p=1000;
    cout<<"p="<<p<<endl;
    cout<<"*p="<<*p<<endl;
    cout<<"a="<<a<<endl;
    return 0;
}