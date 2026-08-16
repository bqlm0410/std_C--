#include <iostream>
#include <string>
using namespace std;
struct student{
        string name;
        int age;
        int score;
    };
int main() {
    student s1={"张三",22,100};
    student* p=&s1;
    cout<<p->name<<" "<<p->age<<" "<<p->score<<endl;
    return 0;
}