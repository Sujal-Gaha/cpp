#include <iostream>
using namespace std;

class Distance
{
private:
    int length;

public:
    void getData()
    {
        cout << "Enter the length: ";
        cin >> length;
    }
    Distance operator<(Distance d2)
    {
        if (length < d2.length)
        {
            return d2;
        }
        else
        {
            return *this;
        }
    }
    void display()
    {
        cout << "The larger distance is " << length;
    }
};

int main()
{
    Distance d1, d2, d3;
    d1.getData();
    d2.getData();
    d3 = d1 < d2;
    d3.display();
}