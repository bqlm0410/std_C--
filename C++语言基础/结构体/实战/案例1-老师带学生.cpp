#include <iostream>
#include <string>
using namespace std;
struct student{
    string Sname;
    int score;
};
struct teacher{
    string Tname;
    student mine[5];
};
void search(teacher* p,int len){
    string houzhui="ABCDE";
    for(int i=0;i<len;i++){
        p[i].Tname=string("teacher_")+houzhui[i];
        for(int j=0;j<5;j++){
            p[i].mine[j].Sname="student_";
            p[i].mine[j].Sname+=houzhui[j];
            p[i].mine[j].score=60;
        }
    }
}
void put(teacher* p,int len){
    for(int i=0;i<len;i++){
        cout<<"老师姓名 "<<p[i].Tname<<endl;
        for(int j=0;j<5;j++){
           cout<<"\t学生姓名 "<<p[i].mine[j].Sname<<" "<<"学生分数 "<< p[i].mine[j].score<<endl;
        }
    }
}
int main() {
    teacher CSU[3];
    int len=sizeof(CSU)/sizeof(CSU[0]);
    search(CSU,len);
    put(CSU,len);
    return 0;
}