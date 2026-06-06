#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin>>a>>b;
    //cin是输入流对象，用来从键盘输入数据
    //注意，cin用的是>>，cout用的是<<，而且注意不要输错数据类型
    cout<<a<<" "<<b;
    //cout是输出流对象，用来向屏幕输出数据
    //所以这些就是输入和输出操作
    //注意，输入和输出操作是分别进行的，不能同时进行
    //如果你学过c，那这个就是c的scanf和printf函数
    //只有写的不一样，其他都是一样的，是不是整洁多了
    return 0;
}