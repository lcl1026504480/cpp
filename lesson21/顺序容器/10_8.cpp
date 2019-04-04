/*
* @Author: lcl1026504480
* @Date:   2019-03-31 15:00:15
* @Last Modified by:   lcl1026504480
* @Last Modified time: 2019-03-31 15:26:41
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <queue>
using namespace std;
const int SPLIT_TIME_MIN=500;
const int SPLIT_TIME_MAX=2000;
class Cell;
priority_queue<Cell>cellQueue;
class Cell
{
private:
    static int count;
    int id;
    int time;
public:
    Cell(int birth):id(count++)
    {
        time=birth+(rand()%(SPLIT_TIME_MAX-SPLIT_TIME_MIN))+SPLIT_TIME_MIN;
    }
    int getId () const
    {
        return id;
    }
    int getSplitTime() const
    {
        return time;
    }
    bool operator <( const Cell &s) const
    {
        return time>s.time;
    }
    void split() const
    {
        Cell child1(time),child2(time);
        cout <<time<<"s:Cell #" << id <<"splits to #"<<child1.getId() <<
        "and #"<<child2.getId()<<endl;
        cellQueue.push(child1);
        cellQueue.push(child2);
    }
};
int Cell::count=0;
int main(int argc, char const *argv[])
{
    // for (int i = 0; i < 1000; ++i)
    // {
    //     cout << rand()<<endl;
    // }
    // cout <<time(0);
    srand(time(0));
    int t;
    cout <<"Simulation time:";
    cin >>t;
    cellQueue.push(Cell(0));
    while(cellQueue.top().getSplitTime()<=t)
    {
        cellQueue.top().split();
        cellQueue.pop();
    }
    return 0;
}