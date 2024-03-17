#include <iostream>
using namespace std;

class Time
{
private:
    int h, m, s;

public:
    void getData()
    {
        cout << "Enter the hour, minute and second: ";
        cin >> h >> m >> s;
    }
    Time addTime(Time t2)
    {
        s = s + t2.s;
        m = m + t2.m;
        h = h + t2.h;
        if (s > 59)
        {
            s -= 60;
            m++;
        }
        if (m > 59)
        {
            m -= 60;
            h++;
        }
        return *this;
    }
    void display()
    {
        cout << endl
             << "The result is " << h << ":" << m << ":" << s;
    }
};

int main()
{
    Time t1, t2, t3;
    t1.getData();
    t2.getData();
    t3 = t1.addTime(t2);
    t3.display();
}