#include <iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int *p=a;//p指向a数组的第一个元素的地址也就是a[0]的地址
    cout<<*p<<endl;
    cout<<a[0]<<endl;
    //这两个输出的结果是一样的，都是1
    cout<<p+1<<endl;//p+1表示p指向的地址加上1个int类型的大小，也就是a[1]的地址
    cout<<*(p+1)<<endl;//*(p+1)表示p指向的地址上的值，也就是a[1]的值
    return 0;
}