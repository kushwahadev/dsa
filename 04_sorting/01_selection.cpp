// selection sort , bubble sort , insertion sort

#include <bits/stdc++.h>
using namespace std;

// insertion sort function
void insertionSort()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (a[j] < a[j - 1])
            {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// bubble sort function
void bubbleSort()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// selection sort function
void selectionSort()
{
    int n;
    cin >> n;
    int a[n];
    // input array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // sort array(a);
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        swap(a[i], a[min]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

// main function call for all sorting functions
int main()
{

    // selectionSort();
    // bubbleSort();
    insertionSort();

    return 0;
}