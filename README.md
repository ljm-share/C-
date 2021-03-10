<h1>C++笔记</h1>  

<h2>一.数据处理</h2>  

1.不要随意跨越数据类型限制，会导致数据溢出.  

2.溢出分为上溢和下溢.  

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
4.表达式中的转换
>自动转换:计算表达式时,C++将bool,char,unsigned char,signed char和short值直接转化为int,这些转化被称为整型提升,如果short比int短,则unsigned short型将被转化为int,如果两种类型的长度是相同的,则unsigned short将被转换成unsigned int,这样确保了数据不会丢失  

>将不同类型进行算数运算时,较小的类型将被转换成较大的类型.  

>C++11校验表
>>如果有一个操作数的类型时long double,则另一个操作数转换为long double
>>否则,如果有一个操作数的类型是double,则另一个操作数转换成double
>>否则,如果有一个操作数的类型是float,则另一个操作数转换成float
>>>在这种情况下,如果两个操作数都是有符号或者无符号,且其中一个操作数的级别比另一个低,则转换成高级别的类型
>>>如果一个操作数为有符号的,另一个无符号,且无符号操作数级别比有符号操作数高,则有符号操作数转换为无符号操作数所属类型
>>>否则,如果有符号的类型可表示无符号类型的所有可能值,则转为有符号操作数的所属类型
>>>否则,两个数都转换成有符号类型的无符号版本  

>>有符号整形从高到底依次为:long long,long,int,short,signed char
>>无符号整形和有符号是相同的,类型char,signed char,unsigned char的级别相同,类型bool的级别最低.wchar_t,char16_t,char32_t的级别与其底层类型相同  

5.强制类型转化
```格式  
"typeName (value)"       //C++原生格式
"(typeName) value"       //C语言格式  
```  

6.auto,auto是C语言关键词,自动判断变量的类型,容易出错,后面做详细解释

7.总结:整形从小到大依次是:bool,char,signed char,unsigned char,short,unsigned short,int,long,unsigned long,long long,wchar_t

<h1>二.复合类型</h1>
1.数组
&nbsp;&nbsp;&nbsp;&nbsp;声明数组的通用格式如下:```typeName arrayName[arraySize]```,arraySize指定元素数目,必须为整形常数或者const值,也可以为常量表达式，这个限制是可以使用new运算符来避开.
&nbsp;&nbsp;&nbsp;&nbsp;数组都是从0开始编号的,数组的很多用途是可以单独访问数组元素,使用下标或索引对元素进行编号.[array索引图](https://github.com/ljm-share/C-aa/blob/0e281d45b4a994fb1bc5cbb8abbf9e2ad49a1c5c/%E6%95%B0%E7%BB%84%E7%B4%A2%E5%BC%95.jpg?raw=true)
