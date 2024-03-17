#include <iostream>
using namespace std;

int main()
{
    int i, n;
    float total = 0;
    int *arr;
    float average;
    cout << "Enter how many numbers: ";
    cin >> n;
    arr = new int[n];
    cout << "Enter the integers: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        total += arr[i];
    }
    average = total / n;
    cout << "The total is " << total << endl;
    cout << "The average is " << average;
    delete[] arr;
}