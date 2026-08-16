#include <iostream>
using namespace std;
int main() {
    /*
    1、输入数字个数 num
    2、输入所有数字 a[num]
    3、排序
        （1）如果前大于后，则调换位置
        （2）一共进行几轮？num-1
        （3）每轮比较几次？num-轮数
    */
    int num{},temp;
    cin>>num;
    int a[num];
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<num;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}