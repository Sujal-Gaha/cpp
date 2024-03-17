#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inch;

public:
    void getData()
    {
        cout << "Enter the feet and inch: ";
        cin >> feet >> inch;
    }
    void addDistance(Distance d1, Distance d2)
    {
        inch = d1.inch + d2.inch;
        feet = d1.feet + d2.feet;
        if (inch >= 12.0)
        {
            inch -= 12.0;
            feet++;
        }
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
    d3.addDistance(d1, d2);
    d3.display();
}