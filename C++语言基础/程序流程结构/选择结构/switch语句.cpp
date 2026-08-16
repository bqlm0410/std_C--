#include <iostream>
using namespace std;
int main() {
    /*
    案例：电影评分
    10~9    经典电影
    8~7     好电影
    6~5     一般电影
    4~1     烂片
    */
   int score;
   cout << "请输入电影评分：";
   cin >> score;
   cout << "电影评分为：" << score << endl;
   switch(score){
    case 10:
    case 9:
        cout << "经典电影" << endl;
        break;
    case 8:
    case 7:
        cout << "好电影" << endl;
        break;
    case 6:
    case 5:
        cout << "一般电影" << endl;
        break;
    default:
        cout << "烂片" << endl;
        break;
   }
    return 0;
}