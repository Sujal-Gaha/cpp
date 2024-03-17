#include <iostream>
using namespace std;

class Rectangle
{
private:
    int l, b;

public:
    Rectangle(int l1, int b1)
    {
        l = l1;
        b = b1;
    }
    Rectangle(Rectangle &x)
    {
        l = x.l;
        b = x.b;
    }
    void display()
    {
        cout << "The area is " << l * b << endl;
    }
};

int main()
{
    Rectangle r1(5, 4);
    Rectangle r2 = r1;
    r1.display();
    r2.display();
}