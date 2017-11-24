// 2.7.3
/* 使用3个用户定义函数(包括main()),并生成下面输出:
 * There blind mice
 * There blind mice
 * see how they run
 * see how they run
 * 其中一个函数要调用两次,该函数生成前两行;另一函数也被调用两次,并生成其余输出.
 */
#include <iostream>
using namespace std;
int line1();
int line2();

int main(){
    line1();
    line1();
    line2();
    line2();
    return 0;
}

int line1(){
    cout << "There blind mice\n";
}

int line2(){
    cout << "see how they run\n";
}