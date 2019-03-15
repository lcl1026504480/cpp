#include <iostream>
using namespace std;
class base;
base * pbase;
class base
{
public:
base()
{
    pbase=this;
}
 virtual void fn()
{
cout<<"base"<<endl;
}
};

class derived:public base
{
 void fn()
{
cout<<"derived"<<endl;
}
};

derived aa;
int main()
{
pbase->fn();
}