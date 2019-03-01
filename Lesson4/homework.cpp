#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

void test1()
{
    string str1;               //���ɿ��ַ���
    string str2("123456789");  //����"1234456789"�ĸ���Ʒ
    string str3("12345", 1, 3);//���Ϊ"123"
    string str4("0123456", 2);  //���Ϊ"01234"
    string str5(5, '1');       //���Ϊ"11111"
    string str6(str2, 2);      //���Ϊ"3456789"

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
    // (A��ASCII����65��a��ASCII����97)
    // ǰ���ȥ�����ASCII�룬>0����1��<0����-1����ͬ����0
    string A("aBcd");
    string B("Abcd");
    string C("123456");
    string D("123dfg");

    // "aBcd" �� "Abcd"�Ƚ�------ a > A
    cout << "A.compare(B):" << A.compare(B)<< endl;                          // �����1
    // "cd" �� "Abcd"�Ƚ�------- c > A
    cout << "A.compare(2, 3, B):" <<A.compare(2, 3, B)<< endl;                // �����1
    // "cd" �� "cd"�Ƚ�
    cout << "A.compare(2, 3, B, 2, 3):" << A.compare(2, 3, B, 2, 3) << endl;  // �����0
    cout << "A.compare(2, 2, B, 2, 3):" << A.compare(2, 2, B, 2, 3) << endl;
    // �ɽ����������0��ʾ�±꣬3��ʾ����
    // "123" �� "123"�Ƚ�
    cout << "C.compare(0, 3, D, 0, 3):" <<C.compare(0, 3, D, 0, 3) << endl;    // �����0
    cout << "C.compare(0, 2, D, 0, 3):" <<C.compare(0, 2, D, 0, 3) << endl;    // �����0

}
void  test4()
{
    string s1;
    // β��һ���ַ���push_back�������ַ���ĩβ����ַ�
    s1.push_back('a');
    s1.push_back('b');
    s1.push_back('c');
    cout<<"s1:"<<s1<<endl; // s1:abc
    // insert(pos,char):���ƶ���λ��posǰ�����ַ�char
    s1.insert(s1.begin(),'1');
    cout<<"s1:"<<s1<<endl;
    s1.insert(s1.begin()+2,'1');
    cout<<"s1:"<<s1<<endl; // s1:1abc
}
void test5()
{
    // ����һ��append()
    string s1("abc");
    s1.append("def");
    cout<<"s1:"<<s1<<endl; // s1:abcdef

    // ��������+ ������
    string s2 = "abc";
    /*s2 += "def";*/
    string s3 = "def";
    s2 += s3;
    cout<<"s2:"<<s2<<endl; // s2:abcdef
}
void test6()
{
    string s1("abcdef"); // ����һ�ι��캯��

    // ����һ�� �±귨
    cout << *(s1.begin())<<endl;

    for( int i = 0; i < s1.size() ; i++ )
    {
        cout<<s1[i];
    }
    cout<<endl;
    cout << "======"<<endl;
    // �����������������
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

    // // �����������������
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
    cout << "ɾ��ĳ���������ַ���";
    s1.erase(s1.begin()+1);              // �����13456789
    cout << s1<<endl;
    s1 = "123456789";
    cout << "ɾ��ĳ������";
    s1.erase(s1.begin()+1,s1.end()-2);   // �����189
    cout<<s1<<endl;
    cout<<"ɾ��ĳ������";
    s1 = "123456789";
    s1.erase(2,6);                       // �����189
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

    cout<<s1.size()<<endl;                     // �����12
    s1.replace(s1.size()-1,1,1,'.');           // �����hello,world.
    cout <<s1<<endl;
    s1.replace(s1.size()-1,1,5,':');
    cout <<s1<<endl;
    // �����6��ʾ�±�  5��ʾ����
    s1.replace(6,2,"girl");
    cout <<s1<<endl;
    // s1.begin(),s1.begin()+5 ������ҿ�����
    s1.replace(s1.begin(),s1.begin()+5,"boy"); // �����boy,girl.
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

    //�ַ�������-----�ҵ��󷵻�����ĸ���ַ����е��±�

    // 1. ����һ���ַ���
    cout << s.find("chicken") << endl;        // ����ǣ�9

    // 2. ���±�Ϊ6��ʼ���ַ�'i'�������ҵ��ĵ�һ��i���±�
    cout << s.find('i',6) << endl;            // ����ǣ�11

    // 3. ���ַ�����ĩβ��ʼ�����ַ��������صĻ�������ĸ���ַ����е��±�
    cout << s.rfind("chicken") << endl;       // ����ǣ�9

    // 4. ���ַ�����ĩβ��ʼ�����ַ�
    cout << s.rfind('i') << endl;             // ����ǣ�18-------��Ϊ�Ǵ�ĩβ��ʼ���ң����Է��ص�һ���ҵ����ַ�

    // 5. �ڸ��ַ����в��ҵ�һ�������ַ���s���ַ�
    cout << s.find_first_of("13br98") << endl;  // ����ǣ�4---b

    // 6. �ڸ��ַ����в��ҵ�һ���������ַ���s���ַ�------��ƥ��dog��Ȼ��birdƥ�䲻�������Դ�ӡ4
    cout << s.find_first_not_of("hello dog 2006") << endl; // ����ǣ�4
    cout << s.find_first_not_of("dog bird 2006") << endl;  // ����ǣ�9

    // 7. �ڸ��ַ�������в��ҵ�һ�������ַ���s���ַ�
    cout << s.find_last_of("13r98") << endl;               // ����ǣ�19

    // 8. �ڸ��ַ�������в��ҵ�һ���������ַ���s���ַ�------��ƥ��t--a---c��Ȼ��ո�ƥ�䲻�������Դ�ӡ21
    cout << s.find_last_not_of("teac") << endl;            // ����ǣ�21

}
void test11()
{
    string s = "cdefba";
    sort(s.begin(),s.end());
    cout<<"s:"<<s<<endl;     // �����abcdef
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
    string s2 = s1.substr(2,5); // �����23456-----2��ʾ��ȡ��ʼ������������5��ʾ����ȡ���ַ����ĳ���
    cout<<s2<<endl;
}
int main()
{
    // test1();
    test12();
    return 0;
}