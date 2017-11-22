/* 2.7.5 main调用一个用户定义函数(摄氏作为参数,返回华氏温度)
 * Please enter a Celsius value: 20
 * 20 degrees Celsius is 68 degrees Fahrenheit.
 * 公式: 华氏=1.8 x 摄氏 + 32.0
 */
#include <iostream>
using namespace std;
double converter(double);

int main(){
    double celsius_value;
    double fahrenheit_value;
    cout << "Please enter a Celsius value: ";
    cin >> celsius_value;
    fahrenheit_value = converter(celsius_value);
    cout << celsius_value << " degrees Celsius is " << fahrenheit_value << " degrees Fahrenheit.";
    return 0;
}

double converter(double n){
    return 1.8*n+32;
}