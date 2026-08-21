#include <iostream>
using namespace std;
void func(){
    cout<<"调用函数func()"<<endl;
}
void func(int a){
    cout<<"调用函数func(int a)"<<endl;
}
void func(double a){
    cout<<"调用函数func(double a)"<<endl;
}
void func(int a,double b){
    cout<<"调用函数func(int a,double b)"<<endl;
}
void func(double b,int a){
    cout<<"调用函数func(double b,int a)"<<endl;
}
int main() {
    func();
    func(10);
    func(3.14);
    func(10,3.14);
    func(3.14,10);
    //func(10,10);错误！有二义性！
    return 0;
}