// 3.7.4
// 要求用户以整数输入秒.转换为天,小时,分钟,秒.
#include <iostream>
using namespace std;

int main(){
    const int day = 24;
    const int hour = 60;
    const int min = 60;
    long long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    cout << seconds << " seconds = " << seconds / min / hour / day << " days, "
         << seconds / min / hour % day << " hours, "
         << seconds / min % hour << " minutes, " << seconds % min << " seconds." << endl;
    return 0;
}