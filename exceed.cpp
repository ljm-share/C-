#include<iostream>
#define ZERO 0
#include<limits>
int main()
{
    using namespace std;                                //�趨�����ռ��Ա�ʹ��cout����
    short sam = SHRT_MAX;                                //����short�ͱ�������short�����ݵ����ֵ����sam
    unsigned short sue = sam;                           //��sam��ֵ�����unsigned short�ͱ���sue��

    cout << "Sam has " << sam << " Sue has " << sue;      //���������ֵ
    cout << endl
          << "Echo of add 1." << endl << "Now ";

    sam = sam + 1;                                         //��sam��ֵ��һ����ʱ��samΪshort�����ݣ��Ѿ�Ϊ���ֵ����ʱ��+1�������磬���Ϊ����
    sue = sue + 1;                                          //��unsigned short�����ֵԶԶ������short����ֵ+1�������
    cout << "Sam has " << sam << " and Sue has " << sue;
    cout << endl;

    sam = ZERO;
    sue = ZERO;                                             //ͬʱ������������ֵ�������0

    cout << "Sam has " << sam << " Sue has " << sue;

    cout << endl;

    cout << "-1" << endl << "Now ";                         //unsigned short���������ǲ���Ϊ��ֵ�ģ�����short���Ϳ��ԣ������⽫����unsigned short���͵�����ֵ��������ֵ����short�������������-10
    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam << " Sue has " << sue << endl;

}
