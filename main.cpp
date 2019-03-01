#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream in;
    in.open("com.txt",ios::trunc); //ios::trunc表示在打开文件前将文件清空,由于是写入,文件不存在则创建
    int i;
    char a='a';
    for(i=1;i<=26;i++)//将26个数字及英文字母写入文件
    {
       if(i<10)
       {
        in<<"0"<<i<<"\t"<<a<<"\n";
        a++;
       }
       else
       {
        in<<i<<"\t"<<a<<"\n";
        a++;
       }
    }
    in.close();//关闭文件
}

