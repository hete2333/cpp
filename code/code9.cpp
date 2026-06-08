#include <iostream>
using namespace std;
int main()
{
    int a[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    //这个是二维数组，5行5列，前面的5是行数，后面的5是列数
    //下面是遍历数组的代码
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<a[i][j]<<" ";//先遍历行，再遍历列
        }
        cout<<endl;
    }
    return 0;
}