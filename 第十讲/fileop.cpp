#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    ofstream p("file.txt");
    if(!p)
    {
        cout <<"open the file!";
        p<<1234;
    }
    p.close();
    return 0;
}