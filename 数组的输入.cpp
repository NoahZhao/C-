#include<iostream>
#include<string>
using namespace std;
int main25()
{
    string a[1000];
    int x;
    cout << "请输入数组数：" << endl;
    cin >> x;
    cout << "请输入数组：" << endl;
    int i;
    for (i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    cout << "数组为：" << endl;
    for (i = 0; i < x; i++)
    {
        cout << a[i] << "    ";
    }
    return 0;
}
//为了构建一个string的数组