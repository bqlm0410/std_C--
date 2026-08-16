#include <iostream>
using namespace std;
int main() {
    int ge,shi,bai;
    for(int i=1;i<101;i++){
        ge=i%10;
        shi=(i/10)%10;
        bai=i/100;
        if(i%7==0||ge==7||shi==7||bai==7){
            cout<<"敲桌子"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}