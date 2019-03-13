#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    string mouth="I have a mouth.";
    static eat()
    {
        cout <<"I am eating!"<<endl;
    }
    sleep()
    {
        cout <<"I am sleeping!"<<endl;
    }
    drool()
    {
        cout <<"I am drooling!"<<endl;
    }
};
class Pig :public Animal
{
public:
    climb()
    {
        cout <<"I can climb the tree."<<endl;
    }
};
class Turtle :public Animal
{
public:
    swim()
    {
        cout <<"I can swim."<<endl;
    }
};
int main(int argc, char const *argv[])
{
    Pig p;
    Turtle t;
    Animal a;
    cout << p.mouth<<endl;
    Pig::eat();
    p.mouth="I have a big mouth.";
    cout << a.mouth <<endl << p.mouth<<endl << t.mouth<<endl;
    return 0;
}