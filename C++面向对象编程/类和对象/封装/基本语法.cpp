#include <iostream>
#include <string>
using namespace std;
class human{
public:
    string name;
    int age;
    int sex;
    void showName(){
        cout<<name<<endl;
    }
};
int main() {
    human h1;
    h1.name="noble";
    h1.showName();
    return 0;
}