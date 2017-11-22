/* 2.7.7 小时分钟合并
 * 用户定义函数,要求用户输入小时和分钟,将值传递给一个void函数
 * Enter the number of hours: 9
 * Enter the number of minutes: 28
 * Time: 9:28
 */
#include <iostream>
using namespace std;
void converter(int,int);

int main(){
    int hours;
    int minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    cout << "Time: ";
    converter(hours,minutes);
    return 0;
}

void converter(int h,int m){
    cout << h << ":" << m;
}