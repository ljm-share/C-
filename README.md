#C++笔记
##处理数据
一.
1不要随意跨越数据类型限制，会导致数据溢出.
<br>
2.溢出分为上溢和下溢.
<br>
3.`cout.setf(ios_base::fixed,ios_base::floatfield);` 
//ios_base::fixed是设置cout为定点输出格式
//ios_base::floatfileld是设置输出时按照浮点格式进行输出,小数点后面有6位
```
例子:
#include<iostream>
int main()
{
    using namespace std;
    cout.setf(ios::fixed,ios_base::floatfield);
    float tree = 3;                         //将浮点值3.0丢给tree
    int guess(3.9832);                      //int型在转换成浮点值时,C++选择了抛弃后面小数部分，而不是选择四舍五入，所以guess的取值将变为3
    int debt = 3.0E12;                      //int类型数据存储不了debt的值,C++没有对结果进行明确定义
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    return 0;
}

//代码输出结果为如下
tree = 3.000000
guess = 3
debt = 2147483647

Process returned 0 (0x0)   execution time : 0.502 s
Press any key to continue.
```
4.




