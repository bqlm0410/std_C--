#include <iostream>
#include <string>
using namespace std;
struct student{
        string name;
        int age;
        int score;
    };
int main() {
    student s[3]={
        {"张三",18,60},
        {"李四",28,70},
        {"王五",38,80}
    };
    for(int i=0;i<3;i++){
        cout<<"姓名 "<<s[i].name<<endl;
        cout<<"年龄 "<<s[i].age<<endl;
        cout<<"成绩 "<<s[i].score<<endl;
    }
    return 0;
}