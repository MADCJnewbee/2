#include <iostream>

using namespace std;

class Time
{
public:
    Time():hour(0),minute(0),sec(0){};
    Time(int h,int m,int s):hour(h),minute(m),sec(s){};
    void set_time();
    void show_time();
    void add_a_sec();
    void add_a_minute();
    void add_an_hour();
    void add_secs(int);
    void add_minutes(int);
    void add_hours(int);
private:
    int hour;
    int minute;
    int sec;
};

void Time::show_time()
{
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}

void Time::set_time()
{
    cin>>hour>>minute>>sec;
}

void Time::add_an_hour()
{
    ++hour;
    if(hour>23)
        hour=0;
}

void Time::add_a_minute()
{
    ++minute;
    if(minute>59)
    {
        minute=0;
        add_an_hour();
    }
}

void Time::add_a_sec()
{
    ++sec;
    if(sec>59)
    {
        sec=0;
        add_a_minute();
    }
}

void Time::add_hours(int n)
{
    hour+=n;
    if(hour>23)
        hour%=24;
}

void Time::add_minutes(int n)
{
    minute+=n;
    if(minute>59)
    {
        add_hours(minute/60);
        minute%=60;
    }
}

void Time::add_secs(int n)
{
    sec+=n;
    if(sec>59)
    {
        add_minutes(sec/60);
        sec%=60;
    }
}
int main()
{
   /*1、
   Time t1();
   t1.show_time();
   t1.set_time();
   t1.show_time();
   Time t2(8,20,50);
   t2.show_time();*/
   /*2、
   Time t1(8,20,50);
   t1.add_a_sec();
   t1.show_time();
   Time t2(8,20,59);
   t2.add_a_sec();
   t2.show_time();*/
   /*3、
   int i;
   Time t1(8,20,50);
   for(i=0;i<20;i++)
   {
       t1.add_a_sec();
       t1.show_time();
   }
   Time t2(8,20,59);
   for(i=0;i<20;i++)
   {
       t2.add_a_sec();
       t2.show_time();
   }
   Time t3(23,59,59);
   for(i=0;i<10;i++)
   {
       t3.add_a_sec();
       t3.show_time();
   }*/
   //4、
   Time t1(21,32,45);
   t1.add_secs(40);
   t1.show_time();
   t1.add_minutes(127);
   t1.show_time();
   t1.add_hours(8);
   t1.show_time();
   return 0;
}
