// 2.7.2
// 要求输入一个以long为单位的距离,然后转换为码(1 long=220 码)
#include <iostream>
using namespace std;

int main(){
    int longs;
    int yard=220;
    int yards;
    cout << "input a number(long):";
    cin >> longs;
    yards = longs * yard;
    cout << longs << " long = " << yards <<" yard.\n";
    return 0;
}