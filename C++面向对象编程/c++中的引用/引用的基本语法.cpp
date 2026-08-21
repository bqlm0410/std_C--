#include <iostream>
using namespace std;
int main() {
    int a=10;
    int &b=a;
    b=20;
    cout<<"a的值为："<<a<<endl;
    cout<<"b的值为："<<b<<endl;
    return 0;
}