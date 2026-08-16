#include <iostream>
#include <string>
using namespace std;
struct hero{
    string name;
    int age;
    string sex;
};
void bubblesort(hero* wangzhe,int len){
    for(int i=0;i<len;i++){
        for(int j=0;j<len-i-1;j++){
            if(wangzhe[j].age>wangzhe[j+1].age){
            // string temp_name=wangzhe[j].name;
            // int temp_age=wangzhe[j].age;
            // string temp_sex=wangzhe[j].sex;
            // wangzhe[j].name=wangzhe[j+1].name;
            // wangzhe[j].age=wangzhe[j+1].age;
            // wangzhe[j].sex=wangzhe[j+1].sex;
            // wangzhe[j+1].name=temp_name;
            // wangzhe[j+1].age=temp_age;
            // wangzhe[j+1].sex=temp_sex;
            // 被注释掉的愚蠢代码（😭）
            hero temp=wangzhe[j];
            wangzhe[j]=wangzhe[j+1];
            wangzhe[j+1]=temp;
        }
    }
    }
    for(int i=0;i<len;i++){
        cout<<"姓名："<<wangzhe[i].name<<" "<<
        "年龄："<<wangzhe[i].age<<" "<<
        "性别 "<<wangzhe[i].sex<<endl;
    }
}
int main() {
    hero wangzhe[5]={
        {"刘备",34,"男"},
        {"张飞",23,"男"},
        {"关羽",58,"男"},
        {"貂蝉",44,"女"},
        {"吕布",21,"男"},
    };
    int len=sizeof(wangzhe)/sizeof(wangzhe[0]);
    bubblesort(wangzhe,len);
    return 0;
}