#include <iostream>
#include <string.h>
using namespace std;
const int sz = 20;

class String
{
private:
    char str[sz];

public:
    String()
    {
        strcpy(str, " ");
    }
    String(const char *s)
    {
        strcpy(str, s);
    }
    String operator+(String s2)
    {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s2.str);
        return temp;
    }
    void display()
    {
        cout << str;
    }
};

int main()
{
    String s1("Hello ");
    String s2("World!");
    String s3;
    s3 = s1 + s2;
    s3.display();
}