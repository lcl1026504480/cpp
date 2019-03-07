#include <iostream>
using namespace std;
void Function()
{
    printf("Call Function!\n");
}
int main()
{
    void (*p)();
    *(int*)&p=(long long)Function;
    cout <<sizeof(&Function)<<endl;
    cout <<(int *)p+1<<endl;
    (*(void(*) ())(p))();
    return 0;
}