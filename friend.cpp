#include <iostream>
using namespace std;

class Sample
{
private:
    int a, b;

public:
    void setValue()
    {
        a = 35;
        b = 40;
    }
    friend float mean(Sample x);
};

float mean(Sample x)
{
    return (x.a + x.b) / 2.0;
}

int main()
{
    Sample s1;
    s1.setValue();
    cout << "The mean value is " << mean(s1);
}