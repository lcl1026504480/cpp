#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

void test1()
{
    string str1;               //生成空字符串
    string str2("123456789");  //生成"1234456789"的复制品
    string str3("12345", 1, 3);//结果为"123"
    string str4("0123456", 2);  //结果为"01234"
    string str5(5, '1');       //结果为"11111"
    string str6(str2, 2);      //结果为"3456789"

    cout<<"str2:"<<str2<<endl;
    cout<<"str3:"<<str3<<endl;
    cout<<"str4:"<<str4<<endl;
    cout<<"str5:"<<str5<<endl;
    cout<<"str6:"<<str6<<endl;
}
void test2()
{
    string s("0123456789012345");
    if (s[16]=='\0')
        cout << "yes"<<endl;
    cout << "size=" << s.size() << endl;
    cout << "length=" << s.length() << endl;
    cout << "max_size=" << s.max_size() << endl;
    cout << "capacity=" << s.capacity() << endl;

}
void test3()
{
    // (A的ASCII码是65，a的ASCII码是97)
    // 前面减去后面的ASCII码，>0返回1，<0返回-1，相同返回0
    string A("aBcd");
    string B("Abcd");
    string C("123456");
    string D("123dfg");

    // "aBcd" 和 "Abcd"比较------ a > A
    cout << "A.compare(B):" << A.compare(B)<< endl;                          // 结果：1
    // "cd" 和 "Abcd"比较------- c > A
    cout << "A.compare(2, 3, B):" <<A.compare(2, 3, B)<< endl;                // 结果：1
    // "cd" 和 "cd"比较
    cout << "A.compare(2, 3, B, 2, 3):" << A.compare(2, 3, B, 2, 3) << endl;  // 结果：0
    cout << "A.compare(2, 2, B, 2, 3):" << A.compare(2, 2, B, 2, 3) << endl;
    // 由结果看出来：0表示下标，3表示长度
    // "123" 和 "123"比较
    cout << "C.compare(0, 3, D, 0, 3):" <<C.compare(0, 3, D, 0, 3) << endl;    // 结果：0
    cout << "C.compare(0, 2, D, 0, 3):" <<C.compare(0, 2, D, 0, 3) << endl;    // 结果：0

}
void  test4()
{
    string s1;
    // 尾插一个字符，push_back就是在字符串末尾添加字符
    s1.push_back('a');
    s1.push_back('b');
    s1.push_back('c');
    cout<<"s1:"<<s1<<endl; // s1:abc
    // insert(pos,char):在制定的位置pos前插入字符char
    s1.insert(s1.begin(),'1');
    cout<<"s1:"<<s1<<endl;
    s1.insert(s1.begin()+2,'1');
    cout<<"s1:"<<s1<<endl; // s1:1abc
}
void test5()
{
    // 方法一：append()
    string s1("abc");
    s1.append("def");
    cout<<"s1:"<<s1<<endl; // s1:abcdef

    // 方法二：+ 操作符
    string s2 = "abc";
    /*s2 += "def";*/
    string s3 = "def";
    s2 += s3;
    cout<<"s2:"<<s2<<endl; // s2:abcdef
}
void test6()
{
    string s1("abcdef"); // 调用一次构造函数

    // 方法一： 下标法
    cout << *(s1.begin())<<endl;

    for( int i = 0; i < s1.size() ; i++ )
    {
        cout<<s1[i];
    }
    cout<<endl;
    cout << "======"<<endl;
    // 方法二：正向迭代器
    char *p;
    char **q;
    p=&s1[0];
    q=&p;
    printf("%p\n",&s1[0] );
    cout <<q<<endl;
    cout <<*q<<endl;
    cout <<&s1[0]<<endl;
    cout <<p<<endl;
    cout <<*p<<endl;
    cout <<"using point directly"<<endl;
    for (int i = 0; i <s1.size(); ++i)
    {
        /* code */
        cout << *(p++);
    }
    // string::iterator iter = s1.begin();
    // for( ; iter < s1.end() ; iter++)
    // {
    //     cout<<*iter;
    // }
    // cout<<endl;

    // // 方法三：反向迭代器
    // string::reverse_iterator riter = s1.rbegin();
    // for( ; riter < s1.rend() ; riter++)
    // {
    //     cout<<*riter;
    // }
    // cout<<endl;
}
void test7()
{
    string s1 = "123456789";
    cout << "删除某个索引的字符：";
    s1.erase(s1.begin()+1);              // 结果：13456789
    cout << s1<<endl;
    s1 = "123456789";
    cout << "删除某个区间";
    s1.erase(s1.begin()+1,s1.end()-2);   // 结果：189
    cout<<s1<<endl;
    cout<<"删除某个长度";
    s1 = "123456789";
    s1.erase(2,6);                       // 结果：189
    cout<<s1<<endl;
    string::iterator iter = s1.begin();
    while( iter != s1.end() )
    {
        cout<<*iter;
        *iter++;
    }
    cout<<endl;

}
void test8()
{
    string s1("hello,world!");

    cout<<s1.size()<<endl;                     // 结果：12
    s1.replace(s1.size()-1,1,1,'.');           // 结果：hello,world.
    cout <<s1<<endl;
    s1.replace(s1.size()-1,1,5,':');
    cout <<s1<<endl;
    // 这里的6表示下标  5表示长度
    s1.replace(6,2,"girl");
    cout <<s1<<endl;
    // s1.begin(),s1.begin()+5 是左闭右开区间
    s1.replace(s1.begin(),s1.begin()+5,"boy"); // 结果：boy,girl.
    cout<<s1<<endl;
}
void test9()
{
    string s = "ABCDEFG";
    string result;

    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
}
void test10()
{
    string s("dog bird chicken bird cat");

    //字符串查找-----找到后返回首字母在字符串中的下标

    // 1. 查找一个字符串
    cout << s.find("chicken") << endl;        // 结果是：9

    // 2. 从下标为6开始找字符'i'，返回找到的第一个i的下标
    cout << s.find('i',6) << endl;            // 结果是：11

    // 3. 从字符串的末尾开始查找字符串，返回的还是首字母在字符串中的下标
    cout << s.rfind("chicken") << endl;       // 结果是：9

    // 4. 从字符串的末尾开始查找字符
    cout << s.rfind('i') << endl;             // 结果是：18-------因为是从末尾开始查找，所以返回第一次找到的字符

    // 5. 在该字符串中查找第一个属于字符串s的字符
    cout << s.find_first_of("13br98") << endl;  // 结果是：4---b

    // 6. 在该字符串中查找第一个不属于字符串s的字符------先匹配dog，然后bird匹配不到，所以打印4
    cout << s.find_first_not_of("hello dog 2006") << endl; // 结果是：4
    cout << s.find_first_not_of("dog bird 2006") << endl;  // 结果是：9

    // 7. 在该字符串最后中查找第一个属于字符串s的字符
    cout << s.find_last_of("13r98") << endl;               // 结果是：19

    // 8. 在该字符串最后中查找第一个不属于字符串s的字符------先匹配t--a---c，然后空格匹配不到，所以打印21
    cout << s.find_last_not_of("teac") << endl;            // 结果是：21

}
void test11()
{
    string s = "cdefba";
    sort(s.begin(),s.end());
    cout<<"s:"<<s<<endl;     // 结果：abcdef
}
void test12()
{
    char str[] = "I,am,a,student; hello world!";

    const char *split = ",; !";
    char *p2 = strtok(str,split);
    while( p2 != NULL )
    {
        cout<<p2<<endl;
        p2 = strtok(NULL,split);
    }
    string s1("0123456789");
    string s2 = s1.substr(2,5); // 结果：23456-----2表示截取开始的索引，参数5表示：截取的字符串的长度
    cout<<s2<<endl;
}
int main()
{
    // test1();
    test12();
    return 0;
}