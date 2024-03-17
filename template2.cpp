#include <iostream>
using namespace std;

template <class T>
T sum(T arr[], int n)
{
    T total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}

int main()
{
    int size;
    cout << "Enter numbers of elements: ";
    cin >> size;
    int integerArray[size];
    cout << "Enter the integers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> integerArray[i];
    }
    cout << "The sum of the integers are " << sum(integerArray, size);
    float floatArray[size];
    cout << endl
         << "Enter the floating point numbers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> floatArray[i];
    }
    cout << "The sum of floating point numbers are " << sum(floatArray, size);
}