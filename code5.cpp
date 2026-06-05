#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    if(a>b)//比较运算符，结果是一个布尔值，true或者false，此外还有其他比较运算符，如==、!=、<=、>=等
    //if 学过英语的都知道，是如果a大于b，就执行括号里的代码
    {
        cout<<"a大于b"<<endl;
    }
    else if(a<b)//这是另一个if语句，因为只能有一个if，所以还想判断就得用else if
    {
        cout<<"a小于b"<<endl;
    }
    else//这个就是除了上面的两个结果之外的，当只剩一种结果时就用else了
    {
        cout<<"a等于b"<<endl;
    }
    return 0;
}