#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    int num=100;
    int ge{},shi{},bai{},result{};
    do{
        ge=num%10;
        shi=(num/10)%10;
        bai=num/100;
        result=pow(ge,3)+pow(shi,3)+pow(bai,3);
        if(result==num){
            cout<<num<<endl;
        }
        num++;
    }
    while(num<1000);
    return 0;
}