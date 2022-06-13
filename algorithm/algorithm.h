#include <iostream>

using namespace std;

void Bubble(int array[], int n)
{
    int x;

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (array[j] > array[j + 1])
            {
                x = array[j];
                array[j] = array[j + 1];
                array[j + 1] = x;
            }
        }
    }
}

int main()
{
    int array[] = { 3,4,2,5,1 };
    int n = sizeof(array) / sizeof(array[0]);

    Bubble(array, n);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
}