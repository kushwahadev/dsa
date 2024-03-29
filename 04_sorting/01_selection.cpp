// selection sort , bubble sort , insertion sort

#include <bits/stdc++.h>
using namespace std;

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
int main()
{

    selectionSort();

    return 0;
}