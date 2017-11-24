// 2.7.6
// 光年-天文单位转换
/* 用户定义函数,光年作为参数,返回天文单位值
 * Enter the number of light years: 4.2
 * 4.2 light years = 265608 astronomical units.
 * 公式: 1 光年 = 63240 天文单位
 */
#include <iostream>
using namespace std;
double converter(double);

int main(){
    double light_years_value;
    double astronomical_units_value;
    cout << "Enter the number of light years: ";
    cin >> light_years_value;
    astronomical_units_value = converter(light_years_value);
    cout << light_years_value << " light years = " << astronomical_units_value << " astronomical units.";
    return 0;
}

double converter(double n){
    return 63240*n;
}