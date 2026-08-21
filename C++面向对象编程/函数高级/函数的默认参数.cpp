#include <iostream>
using namespace std;
void test01(int a=10){
    cout<<"调用函数test01"<<endl;
}
int main() {
    test01();
    return 0;
}