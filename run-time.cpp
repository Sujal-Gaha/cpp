#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class" << endl;
    }
};

class DeriveOne : public Base
{
public:
    void show()
    {
        cout << "DeriveOne class" << endl;
    }
};

class DeriveTwo : public Base
{
public:
    void show()
    {
        cout << "DeriveTwo class" << endl;
    }
};

int main()
{
    Base *ptr;
    DeriveOne d1;
    DeriveTwo d2;
    ptr = &d1;
    ptr->show();
    ptr = &d2;
    ptr->show();
}