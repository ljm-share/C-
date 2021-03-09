#include<iostream>
#define ZERO 0
#include<limits>
int main()
{
    using namespace std;                                //设定命名空间以便使用cout函数
    short sam = SHRT_MAX;                                //定义short型变量，将short型数据的最大值赋予sam
    unsigned short sue = sam;                           //将sam的值赋予给unsigned short型变量sue中

    cout << "Sam has " << sam << " Sue has " << sue;      //输出两个的值
    cout << endl
          << "Echo of add 1." << endl << "Now ";

    sam = sam + 1;                                         //当sam的值加一，此时的sam为short型数据，已经为最大值，此时的+1导致上溢，则成为复数
    sue = sue + 1;                                          //而unsigned short的最大值远远超过了short，则值+1正常输出
    cout << "Sam has " << sam << " and Sue has " << sue;
    cout << endl;

    sam = ZERO;
    sue = ZERO;                                             //同时将两个变量的值都赋予成0

    cout << "Sam has " << sam << " Sue has " << sue;

    cout << endl;

    cout << "-1" << endl << "Now ";                         //unsigned short数据类型是不能为负值的，但是short类型可以，所以这将导致unsigned short类型的数据值变成其最大值，而short类型则正常输出-10
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam << " Sue has " << sue << endl;

}
