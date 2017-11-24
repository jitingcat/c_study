// 3.7.3
// 要求用户以度、分、秒输入一个纬度，然后以度为单位显示该纬度，用符号常量表示转换值。
// 对于每个输入值，应使用一个独立的变量存储。
#include <iostream>
using namespace std;

int main(){
    const int sec = 60;
    const int min = 60;
    float seconds,degrees,minutes;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl
         << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = "
         << degrees + minutes / min + seconds / sec / min << " degrees";
    return 0;
}