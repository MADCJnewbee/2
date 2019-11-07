#include <iostream>

using namespace std;

class Time
{
public:
    Time(int h,int m,int s)
    {
         hour=h;
        minute=m;
        sec=s;
    }
    /*void set_time(int h,int m,int s)
    {
        hour=h;
        minute=m;
        sec=s;
    }*/
     void  display() const;
private:
    int hour;
    int minute;
    int sec;
};

void  Time::display() const
{
    cout<<hour<<"."<<minute<<"."<<sec<<endl;
}
int main()
{
    const Time t1(10,10,10);
   //const t1.set_time(20,20,20);
    t1.display();
    return 0;
}
