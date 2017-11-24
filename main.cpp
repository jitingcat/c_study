// 3.7.5
/* 编写一个程序，要求用户输入全球当前的人口和美国当前的人口（或其他国家的人口）。
 * 将这些信息存储在long long变量中，并让程序显示美国（或其他国家）的人口占全球人口的百分比。该程序的输出应与下面类似:
 * Enter the world's population: 6898758899
 * Enter the population of the US: 310783781
 * The population of the US is 4.50492% of the world population.
 */
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the world's population: ";
    long long gp = 0;//全球当前人口
    cin >> gp;
    cout << "Enter the population of the US: ";
    long long ap = 0;//美国当前人口
    cin >> ap;
    cout << "The population of the US is " << double(ap) / double(gp) * 100 << "% of the world population." << endl;
    return 0;
}