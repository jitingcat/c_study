// 3.7.2 输入身高(英尺英寸),输入体重(磅),使用3个变量存储
// 报告BMI(Body Mass Index,体重指数)
// 以英寸形式指出身高,将英寸转换为米,磅转换为千克
// 用符号常量表示转换因子
// BMI=体重/身高的平方 1英尺=12英寸 1千克=2.2磅 1英寸=0.0254米
#include <iostream>
using namespace std;

int main(){
    const int ft_to_in = 12;
    const double in_to_m = 0.0254;
    const double kg_to_lb = 2.2;
    int ft;
    int in;
    double lb;
    double meter;
    double bmi;
    double kg;
    cout << "Input your height(foot):";
    cin >> ft;
    cout << "Input your height(inch):";
    cin >> in;
    in = in + ft * ft_to_in;
    cout << "Your height is " << in << " inch." << endl
         << "Please enter your body weight:";
    cin >> lb;
    meter = in * in_to_m;
    kg = lb / kg_to_lb;
    cout << "Your weight is " << kg << " kilogram." << endl;
    bmi = kg / (meter*meter);
    cout << "Your Body Mass Index is " << bmi << "." << endl;
    return 0;
}