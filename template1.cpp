#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter how many numbers are there: ";
    cin >> n;
    int numbers[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    bubbleSort(numbers, n);
    cout << "Sorted numbers: ";
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }
}