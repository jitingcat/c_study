// 3.7.1 用户使用一个整数指出自己的身高(单位为英寸),然后将身高转换为英尺和英寸.
// 使用下划线字符指示输入位置.并使用一个const符号常量来表示转换因子
// 1 foot = 12 inch
#include <iostream>
using namespace std;

int main(){
    const int inch = 12;
    int inchs;
    int in;
    int ft;
    cout << "Please enter your height:______(in)\b\b\b\b\b\b\b\b\b\b";
    cin >> inchs;
    in = inchs % inch;
    ft = inchs / inch;
    cout << "Ok, your height is " << ft << " ft " << in << " in.\n";
    return 0;
}