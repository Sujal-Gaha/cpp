#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inch;

public:
    void getData()
    {
        cout << "Enter the feet and inch: ";
        cin >> feet >> inch;
    }
    Distance addDistance(Distance d2)
    {
        inch = inch + d2.inch;
        feet = feet + d2.feet;
        if (inch >= 12.0)
        {
            inch -= 12.0;
            feet++;
        }
        return *this;
    }
    void display()
    {
        cout << endl
             << "The result is " << feet << "-" << inch;
    }
};

int main()
{
    Distance d1, d2, d3;
    d1.getData();
    d2.getData();
    d3 = d1.addDistance(d2);
    d3.display();
}