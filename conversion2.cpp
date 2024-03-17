#include <iostream>
using namespace std;

class Converter
{
private:
    float metre;

public:
    Converter()
    {
        metre = 0;
    }
    Converter(float km)
    {
        metre = km * 1000;
    }
    void display()
    {
        cout << "The distance in metre is " << metre;
    }
};

int main()
{
    Converter c1;
    float km;
    cout << "Enter the distance in km: ";
    cin >> km;
    c1 = km;
    c1.display();
}