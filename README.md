
<h1>C++笔记</h1>  

---

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

---

<h1>二.复合类型</h1>  

1.数组  
>声明数组的通用格式如下:```typeName arrayName[arraySize]```,arraySize指定元素数目,必须为整形常数或者const值,也可以为常量表达式，这个限制是可以使用new运算符来避开.  

>数组都是从0开始编号的,数组的很多用途是可以单独访问数组元素,使用下标或索引对元素进行编号.  

>有效下标:如果将一个值赋给一个不存在的元素months[101],编译器是不会报错的,但是可能会破坏程序数据或者代码,所以尽量避免这类错误  

>数组的初始化规则:只有在定义数组时才能使用初始化,此后不行,也不能将一个数组赋值给另外一个数组,但是可以使用下标分别给数组的元素赋值  

>当初始化数组时方括号内([])为空,C++编译器将自动计算元素个数,虽然这样偷懒,但是有时候万一写漏了一个数据会导致问题发生.使用以下方法有利有弊:
>```
short things[] = {1,3,5,8};
int num_elements = sizeof things / sizeof (short)
>```

C++11新增功能:在初始化数组时,可以省略(=):```double earnings[4] {1.2e6,1.6e4,1.1e4};```
其次可不在大括号内不包含任何东西,这样子将会把所有元素都设为0
列表数据禁止乱起八糟,依照上面的通用格式.
在赋予不同类型数组时,要注意元素值不能超过赋予类型的最大限制  

2.字符串
>C++处理字符串的两种方式:1.C-风格字符串(C-style string),2.基于string类库
字符串提供了处理文本信息的便捷方式,可以将字符串存储在char数组中
C-风格字符串有一种特殊的性质:以空字符(null character)结尾,空字符被写作\0,其ASCII码为0,用来标记字符串的结尾.
>```
例如:
char dog[8] = {'1','2','3','4',' ','I'};            //not a string;
char cat[8] = {'1','2','3','4','\0'};               //a string;
>```
在确定存储字符串所需要的最短数组时，要将结尾的空字符计算在内  

>数组中使用字符串:1.将数组初始化为字符串常量,2.将键盘或文件读入到数组中.
可以使用标准C语言库函数`strlen()`来确定字符串的长度,需要提供头函数`<csting>`,`strlen()`只计算可见的字符串,不会将数组最后的空字符计算在内.  

>在使用CodeBlock运行数组题时,输入的数组内容超过了本该存在的最大范围,则第一次输入的值将溢出,导致输出不确定  

>cin使用空白(空格,制表符和换行符)来确定字符串的结束位置.这算是cin函数的一个高级特性
