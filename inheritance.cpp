#include <iostream>
using namespace std;

class PERSON
{
private:
    char NAME[20];
    int AGE;
    long int CONTACT_NUMBER;

public:
    void GETDATA()
    {
        cout << "Enter the name, age and contact number: ";
        cin >> NAME >> AGE >> CONTACT_NUMBER;
    }
    void DISPLAYDATA()
    {
        cout << "The name is " << NAME << endl;
        cout << "The age is " << AGE << endl;
        cout << "The contact number is " << CONTACT_NUMBER << endl;
    }
};

class TEACHER : public PERSON
{
private:
    char QUALIFICATION[30];
    int SALARY;

public:
    void GETDATA()
    {
        PERSON::GETDATA();
        cout << "Enter the qualification and salary: ";
        cin >> QUALIFICATION >> SALARY;
    }
    void DISPLAYDATA()
    {
        PERSON::DISPLAYDATA();
        cout << "The qualification is " << QUALIFICATION << endl;
        cout << "The salary is " << SALARY << endl
             << endl;
    }
};

class STUDENT : public PERSON
{
private:
    int LEVEL, SEMESTER;

public:
    void GETDATA()
    {
        PERSON::GETDATA();
        cout << "Enter the level and semester: ";
        cin >> LEVEL >> SEMESTER;
    }
    void DISPLAYDATA()
    {
        PERSON::DISPLAYDATA();
        cout << "The level is " << LEVEL << endl;
        cout << "The semester is " << SEMESTER << endl;
    }
};

int main()
{
    TEACHER t1;
    STUDENT s1;
    t1.GETDATA();
    s1.GETDATA();
    t1.DISPLAYDATA();
    s1.DISPLAYDATA();
}