/*
* @Author: lcl1026504480
* @Date:   2019-03-29 15:25:45
* @Last Modified by:   lenovouser
* @Last Modified time: 2019-03-29 19:10:17
*/

#include<iostream>
#include<iterator>
#include<string>
using namespace std;

int main()
{
    istream_iterator<string> in_iter(cin),eof;         //注意：stream_iterator<string> in_iter(cin)要求第一次输入
    ostream_iterator<string> out_iter(cout,"\n");  // 绑定流对象cout,元素之间分隔符为换行
    while(in_iter!=eof)
   {
        *out_iter=*in_iter;    //输入流解引用，取得值后，给输出流，输出。

        // ++out_iter;
        in_iter++;
   }
 }
