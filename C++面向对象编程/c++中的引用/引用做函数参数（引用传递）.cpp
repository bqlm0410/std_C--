#include <iostream>
using namespace std;
void change(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main() {
    int a=10;
    int b=20;
    change(a,b);
    cout<<"a的值："<<a<<endl;
    cout<<"b的值："<<b<<endl;
    return 0;
}