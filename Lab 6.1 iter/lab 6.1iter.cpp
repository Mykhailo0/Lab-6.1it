// Лабораторна робота № 6.1

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


void Init(int* a, int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 91 - 40;
    }
}

int Count(int* a, int size)
{
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (!(a[i] > 0 && a[i] % 5 == 0))
        {
            k++;
        }
    }
    return k;
}

int Suma(int* a, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (!(a[i] > 0 && a[i] % 5 == 0))
        {
            sum += a[i];
        }
    }
    return sum;
}

void Zero(int* a, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (!(a[i] > 0 && a[i] % 5 == 0))
        {
            a[i] = 0;
        }
    }
}

void Print(int* a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

int main()
{
    const int n = 22;
    int a[n];

    cout << "initialization:" << endl;
    Init(a, n);

    cout << "Original array:" << endl;
    Print(a, n);
    int k = Count(a, n); cout << "Number of elemnts:" << k << endl;
    int s = Suma(a, n); cout <<"Sum of elements: " << s << endl;
    cout << "Zero array;" << endl;
    Zero(a, n);
    cout << "Modified:" << endl;
    Print(a, n);

    return 0;
}
