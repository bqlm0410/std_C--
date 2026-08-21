#include <iostream>
#include <string>
using namespace std;
class human{
private:
    string name;//可读可写
    int age=18;//只读
    int ID;//只写
public:
    void showName(){
        cout<<name<<endl;
    }
    void setName(string t_name){
        name=t_name;
    }
    void showAge(){
        cout<<age<<endl;
    }
    void setID(int t_ID){
        ID=t_ID;
    }
};
int main() {
    human h1;
    h1.setName("noble");
    h1.showName();
    h1.showAge();
    h1.setID(1);
    return 0;
}