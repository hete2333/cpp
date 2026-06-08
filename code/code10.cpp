#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;//p指向a的地址,我们管p这类变量为指针变量
    int*q=nullptr;//q指向空地址，我们管q这类变量为空指针变量
    //记住，一定要初始化指针变量，否则会出现野指针错误
    int b=20;
    const int*c=&b;//用了const关键词，c指向的地址上的值不能被修改，但是可以指向其他地址
    //还有另一种用法
    int * const d=&b;//用了const关键词，d本身不能被修改
    const int * const e=&b;//用了const关键词，e指向的地址上的值不能被修改，也不能指向其他地址
    //const的作用是防止修改，具体怎么用取决于你自己的需求
    cout<<p<<endl;//p表示p指向的地址
    cout<<*p<<endl;//*p表示p指向的地址上的值
    return 0;
}