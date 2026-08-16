#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand((unsigned int)time(NULL));
    int num = rand()%100+1;
    int guess{};
    cin>>guess;
    while(guess!=num){
        if(guess>num){
            cout<<"你猜大了,请重新输入"<<endl;
            cin>>guess;
        }
        else{
            cout<<"您猜小了,请重新输入"<<endl;
            cin>>guess;
        }
    }
    cout<<"您猜对了"<<endl;
    return 0;
}