#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    ofstream p("file.txt");
    printf("%d\n",!p );
    cout <<(!p);
    return 0;
}