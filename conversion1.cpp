#include <iostream>
using namespace std;

class Converter
{
private:
    int hours, minutes;

public:
    void getData()
    {
        cout << "Enter the hour and minute: ";
        cin >> hours >> minutes;
    }
    operator int()
    {
        int seconds;
        seconds = (hours * 60 * 60) + (minutes * 60);
        return seconds;
    }
};

int main()
{
    Converter c1;
    c1.getData();
    int s;
    s = c1;
    cout << "Time in seconds is " << s;
}